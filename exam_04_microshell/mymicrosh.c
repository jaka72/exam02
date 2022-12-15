#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/wait.h>
// #include "colors_on.h"			// WORKING WITH my_printf()
#include "colors_off.h"		// WORKING WITH my_printf()
#include "myprintf/ft_printf.h"


#define ispipe 1
#define iscolon 2
#define isend 3
#define readfrom 0
#define writeto 1


typedef struct s_data
{
	int myfd[2];
	int tempfd;
	int is_pipe;
	int is_colon;
	int is_end;
} t_data;


void	reset_fds(t_data *d)
{
	my_printf(YEL, "Reset ....\n\n");
	d->is_colon = 0;
	d->is_pipe = 0;
	d->is_end = 0;
//	d->myfd[readfrom] = STDIN_FILENO;
//	d->myfd[writeto] = STDOUT_FILENO;
	// d->tempfd = STDIN_FILENO;
	d->tempfd = dup(0); // MAYBE POSSIBLE dup(0)		???
	// d->tempfd = dup(d->myfd[readfrom]); // MAYBE POSSIBLE dup(0)		???
										//  or dup(STDIN_FILENO)		???
	
	
	// my_printf("reset, tempfd: %d\n", d->tempfd);
	// my_printf("reset, myfd[0]: %d\n", d->myfd[readfrom]);
	// my_printf("reset, myfd[1]: %d\n\n", d->myfd[writeto]);
}


int ft_strln(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}



int	run_cd(char **argv)
{
	int i = 0;

	while (argv[i])
		i++;
	if (i != 2)
	{
		write(2, "error: cd: bad arguments\n", 25);
		return (1);
	}
	i = chdir(argv[1]);
	if (i != 0)
	{
		write(2, "error: cd: cannot change directory to ", 38);
		write(2, argv[1], ft_strln(argv[1]));
		write(2, "\n", 1);
		return (1);
	}
	return (0);
}



int	run_cmd(char **argv, t_data *d, char **envp)
{
	my_printf(BLU, "Run_cmd, start\n");
	my_printf(BLU, "   ispipe: %d, iscolon: %d, is_end: %d\n", d->is_pipe, d->is_colon, d->is_end);
	int	ret = 333;
	int pid;
	// j = 0;

	//if (d->is_pipe)
	//{
		ret = pipe(d->myfd);
		if (ret != 0)
		{
			write(2, "Error: fatal\n", 13);
			exit(0);
		}
		// my_printf("   run, is_pipe, tempfd: %d\n", d->tempfd);
		// my_printf("   run, is_pipe, myfd[0]: %d\n", d->myfd[readfrom]);
		// my_printf("   run, is_pipe, myfd[1]: %d\n", d->myfd[writeto]);
	//}



	pid = fork();
	if (pid == -1)
	{
		write(2, "Error: fatal\n", 13);
		exit(0);
	}

	
	if (pid == 0)
	{
		my_printf(BLU, "   run child [ %s ]\n", *argv);
		my_printf(BLU, "   run child arg[1][ %s ]\n", argv[1]);

		// LAST COMMAND, AFTER PIPE
		if ((d->is_colon == 1 || d->is_end == 1) && d->is_pipe == 1)
		{
			my_printf(BLU, "         yes pipe, with colon or end\n");
			my_printf(BLU, "         tempfd: %d\n", d->tempfd);
			dup2(d->tempfd, STDIN_FILENO);
			dup2(STDOUT_FILENO, d->myfd[writeto]);
			// dup2(d->myfd[readfrom], STDIN_FILENO);
		}
		
		// PIPE AFTER COMMAND
		else if ((d->is_colon == 0 && d->is_end == 0) && d->is_pipe == 1)	// WRITE OUTPUT TO THIS PIPE
		{																	// READ  INPUT FROM tempfd 
			my_printf(BLU, "        yes pipe, no colon or end\n");
			dup2(d->tempfd, STDIN_FILENO);		//		FIRST ROUND  INPUT (tempfd) IS FROM 0
												//		OTHER ROUNDS INPUT (tempfd) IS PREVIOUS PIPE
			dup2(d->myfd[writeto], STDOUT_FILENO);
		}

		// SINGLE COMMAND
		else if ((d->is_colon == 1 || d->is_end == 1) && d->is_pipe == 0)
		{
			my_printf(BLU, "        C) Single command, with colon or end\n");
		}

		//close(d->tempfd);	// LOOKS LIKE DOES NOT MATTER 
		close(d->myfd[readfrom]);
		close(d->myfd[writeto]);
		//my_printf(MAG, "before execute\n");
	
		my_printf(RES, "");


		if (strcmp(*argv, "cd") == 0)
		{
			run_cd(argv);
			exit(0);
		}


		ret = execve(*argv, argv, envp);
		if (ret != 0)
		{
			write(2, "error: cannot execute ", 22);
			write(2, argv[1], ft_strln(argv[1]));
			write(2, "\n", 1);
		}

		// ret = execve(argv[1], argv, envp);
		perror("perrpr : ");
		my_printf(RED, "       runcmd, execve failed, ret %d, errno %d\n", ret, errno);
		return (1);
	
	}
	else		// PARENT 
	{
		usleep(2000);
		//printf("       printf %d\n", ret);
		close(d->myfd[writeto]);
		close(d->tempfd);
		//if (d->is_pipe == 1)
			// dup2(d->tempfd, d->myfd[readfrom]);
			//dup2(d->myfd[readfrom], d->tempfd);
			d->tempfd = dup(d->myfd[readfrom]);

		my_printf(CYN, "    runcmd, parent:   myfd %d\n", d->myfd[readfrom]);
		my_printf(CYN, "    runcmd, parent: tempfd %d\n", d->tempfd);
		close(d->myfd[readfrom]);
		//close(d->tempfd);	// HERE IN THE PARENT MUST NOT BE CLOSED, BUT PRESERVED FOR THE NEXT ROUND
	}
	wait(NULL);
	return (0);
}


int main(int argc, char **argv, char **envp)
{
	t_data	d;
	int	i, j;

	reset_fds(&d);

	my_printf(RED, "After reset, myfd[0] : %d\n", d.myfd[readfrom]);

	i = 1;
	j = 1;

	while (argv[i] != NULL)
	{
		my_printf(GRN, "ROUND i%d [ %s ]\n", i, argv[i]);
		if (strcmp(argv[i], "|") == 0)
		{
			my_printf(GRN, "    Found pipe: j%d\n", j);
			argv[i] = NULL;
			d.is_pipe = 1;
			run_cmd(&argv[j], &d, envp);
			j = i + 1;
			//my_printf(GRN, "    after ispipe: j%d\n", j);
		}
		else if (strcmp(argv[i], ";") == 0)
		{
			my_printf(GRN, "    Found semicolon: j%d\n", j);
			argv[i] = NULL;
			d.is_colon = 1;
			run_cmd(&argv[j], &d, envp);
			j = i + 1;
			reset_fds(&d);
			//my_printf(GRN, "    after iscolon: j%d\n", j);
		}
		else if (argv[i + 1] == NULL)
		{
			my_printf(GRN, "    Found NULL: j%d\n", j);
			d.is_end = 1;
			run_cmd(&argv[j], &d, envp);
			
			// run_cmd(argv, &d, envp);
			
			
			//my_printf(GRN, "    after is_end: j%d\n", j);
			my_printf(RES, "\n");
			return (0);
		}


		i++;
		my_printf(GRN, "Loop lastline, i%d\n\n", i);
	}
	my_printf(RES, "\n");
}

/*
. run_mcs.sh && ./mymsc /bin/ls -l



. run_mcs.sh && ./mymsc /bin/ls "|" /usr/bin/wc ";" /bin/cat infile "|" /usr/bin/grep a "|" /usr/bin/wc  // HANGS
. run_mcs.sh && ./mymsc /bin/cat infile "|" /usr/bin/grep a "|" /usr/bin/wc  // HANGS

*/
