/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmurovec <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/20 22:27:48 by jmurovec      #+#    #+#                 */
/*   Updated: 2020/12/20 22:27:48 by jmurovec      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

size_t	gnl_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*gnl_strchr(char *str, int c)
{
	char	*s;

	if (c == '\0')
		return (str + gnl_strlen(str));
	s = str;
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	return (NULL);
}

char	*gnl_strdup(char *str)
{
	int		i;
	char	*newstr;

	if (!str)
		return (NULL);
	newstr = malloc((gnl_strlen(str) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	*gnl_strcat(char *joined, char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	while (str1[i])
	{
		joined[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		joined[i] = str2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	return (joined);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	joined = malloc((gnl_strlen(s1) + gnl_strlen(s2) + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	return (gnl_strcat(joined, s1, s2));
}

static int	str_to_line(char **str, char **line)
{
	int		len;
	char	*temp;

	len = 0;
	while ((*str)[len] != '\n' && (*str)[len] != '\0')
		len++;
	if ((*str)[len] == '\n')
	{
		(*str)[len] = '\0';
		*line = gnl_strdup(*str);
		temp = gnl_strdup(&(*str)[len + 1]);
		free(*str);
		*str = temp;
		if (*line == NULL || *str == NULL)
			return (-1);
	}
	else
	{
		*line = gnl_strdup(*str);
		free(*str);
		*str = NULL;
		if (*line == NULL)
			return (-1);
	}
	return (1);
}

static int	buff_to_str(int bytes_read, char *buff, char **str)
{
	char	*temp;

	while (bytes_read > 0)
	{
		bytes_read = read(0, buff, 1000);
		if (bytes_read >= 0)
			buff[bytes_read] = '\0';
		if (*str == NULL)
		{
			*str = gnl_strdup(buff);
			if (*str == NULL)
				return (-1);
		}
		else
		{
			temp = gnl_strjoin(*str, buff);
			free(*str);
			*str = temp;
			if (*str == NULL)
				return (-1);
		}
		if (gnl_strchr(*str, '\n'))
			return (bytes_read);
	}
	return (bytes_read);
}

int			get_next_line(char **line)
{
	int			bytes_read;
	char		buff[1001];
	static char	*str;

	if (line == NULL)
		return (-1);
	if (str == NULL || gnl_strchr(str, '\n') == NULL)
		bytes_read = buff_to_str(1, buff, &str);
	else
		bytes_read = 0;
	if (bytes_read < 0)
		return (-1);
	if (str_to_line(&str, line) < 0)
		return (-1);
	if (bytes_read == 0 && str == NULL)
		return (0);
	return (1);
}
