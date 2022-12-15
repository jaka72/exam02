#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[], char *envp[])
{
	int i;
	char *c_ls[] = {"/bin/ls", "-l", NULL};
	// char *c_ls[] = {"", "-l", NULL};


	printf("argc: %d\n", argc);

	i = 0;
	while (argv[i] != NULL)
	{
		printf("  %d[%s],", i, argv[i++]);
	}
	printf("\n");


	execve(c_ls[0], c_ls, NULL);
	// execve("/bin/ls", c_ls, envp);
	// execve("ls", c_ls, envp);

	// WHAT IS THE PURPOSE OF **envp AT THE END OF execve??
	// IT WORKS FINE WITHOUT IT
}
