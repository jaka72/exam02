/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmurovec <jmurovec@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/25 10:28:30 by jmurovec      #+#    #+#                 */
/*   Updated: 2022/11/12 17:23:12 by jmurovec      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// REWRITTEN FROM AKANT, WORKING
// CHANGED TO THE NEW SUBJECT, ONLY WITH FD, RETURNING LINE, NO STATIC VARIABLE

char	*copy_and_extend_str(char *str, int len)
{
	char	*new_str;
	int		i;

	new_str = NULL;
	i = 0;
	if (str)
	{
		new_str = malloc(sizeof(char) * len + 1);
		if (!new_str)
			return (NULL);
		while (str[i] && i < len)
		{
			printf(" .   ... loop i%d \n", i);
			new_str[i] = str[i];
			i++;
		}
		if (new_str[0] != '\n')	// added jaka
			new_str[i] = '\0';
		free(str);
	}


	if (new_str[0] == '\0')
		return (NULL);
	return (new_str);
}

char *get_next_line(int fd /*, char **line */ )
{
	int		ret;
	char	c;
	char	*str;
	int		len;
	int		counter;
	char	*line;

	len = 5;
	counter = 0;
	str = malloc(sizeof(char) * len + 1);
	// if (!str || !line)
	if (!str)
	{
		printf("A)\n");
		return (NULL);
	}
	str[len] = '\0';
	while (1)
	{
		printf("a ");

		ret = read(fd, &c, 1);
		printf("ret from read %d\n", ret);
		if (ret < 0)
		{
			printf("B)\n");
			return (NULL);
		}
		if (ret == 0 /*|| c == '\n' . */)
		{
			printf("BREAK: ret = %d, c = %d)\n", ret, c);
			break ;
			// return (NULL);
		}

		if (ret == 1 && c == '\n')
		{
			printf("  ret = %d, c = %d)\n", ret, c);
			line = str;
			return (line);
		}
		if (c == '\0')
			return (NULL);
		
		str[counter] = c;
		counter++;
		if (counter == len)
		{
			len = len + 1000;
			str = copy_and_extend_str(str, len);
			if (!str)
			{
				printf("C)\n");
				return (NULL);
			}
		}
	}
	str[counter] = '\0';
	str = copy_and_extend_str(str, counter);
	printf("After CAES\n");
	if (!str)
	{
		printf("D)\n");
		return (NULL);
	}
	line = str;
	printf("F)\n");
	return (line);
}



int main(void)
{
	char	*line;
	int		fd;

	//fd = open("text.txt", O_RDONLY);

	fd = 0;
	int i = 0;
	while (line != NULL && i++ < 15)
	{
//		printf("b) \n");
		line = get_next_line(fd);
		printf("%d  [%s]\n\n", i, line);
		//free(line);
		//exit (0);
		//system("leaks a.out");
	}
	printf("[%s]\n", line);
	free(line);

	close(fd);
	//system("leaks a.out");
	return (0);
}
