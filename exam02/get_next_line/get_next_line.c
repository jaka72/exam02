/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   gnl_akant_rewritten.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmurovec <jmurovec@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/25 10:28:30 by jmurovec      #+#    #+#                 */
/*   Updated: 2021/10/25 10:50:25 by jmurovec      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// REWRITTEN FROM AKANT, WORKING

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
			return (0);
		while (str[i] && i < len)
		{
			new_str[i] = str[i];
			i++;
		}
		new_str[i] = '\0';
		free(str);
	}
	return (new_str);
}

int	get_next_line(int fd, char **line)
{
	int		ret;
	char	c;
	char	*str;
	int		len;
	int		counter;

	len = 5;
	counter = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str || !line)
		return (-1);
	str[len] = '\0';
	while (1)
	{
		ret = read(fd, &c, 1);
		if (ret < 0)
			return (-1);
		if (ret == 0 || c == '\n')
			break ;
		str[counter] = c;
		counter++;
		if (counter == len)
		{
			len = len + 1000;
			str = copy_and_extend_str(str, len);
			if (!str)
				return (-1);
		}
	}
	str[counter] = '\0';
	str = copy_and_extend_str(str, counter);
	if (!str)
		return (-1);
	*line = str;
	return (ret);
}



// int mainxxx(void)
// {
// 	char	*line;
// 	int		ret;

// 	ret = 1;
// 	while (ret > 0)
// 	{
// //		printf("b) \n");
// 		ret = get_next_line(&line);
// 		printf("[%s]\n", line);
// 		free(line);
// 		system("leaks a.out");
// 	}
// 	printf("[%s]\n", line);
// 	free(line);
// 	system("leaks a.out");
// 	return (0);
// }
