#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

// RETYPED FROM AKANT


char *copy_str(char *str, int len)
{
    char *newstr;
    int i;

    newstr = NULL;
    i = 0;
    if (str)
    {
        newstr = malloc(sizeof(char) * len + 1);
        if (!newstr)
            return (0);
        while (str[i] && i < len)
        {
            newstr[i] = str[i];
            i++;
        }
        newstr[i] = '\0';
        free(str);
    }
    return (newstr);
}

int get_next_line(int fd, char **line)
{
    int br;
    char c;
    char *str;
    int len;
    int counter;

    //fd = 0;
    len = 5;
    c = '\0';
    counter = 0;
    if (line == NULL)
        return (-1);
    str = malloc(sizeof(char) * len + 1);
    if (str == NULL)
        return (-1);
    str[len] = '\0';
    while (1)
    {
        br = read(fd, &c, 1);
        if (br < 0)
            return (-1);
        if (br == 0 || c == '\n')
            break ;
        str[counter] = c;
        counter++;
        if (counter == len)
        {
            len = len * 2;
            str = copy_str(str, len);
            if (str == NULL)
                return (-1);
        }
    }
    str = copy_str(str, counter);
    if (str == NULL)
        return (-1);
    str[counter] = '\0';
    *line = str;
    return (br);
}

// int main(void)
// {
//     char *line;
//     int br;

//     br = 1;
//     while (br > 0)
//     {
//         br = get_next_line(&line);
//         //printf("br: %d, line |%s|\n", br, line);
//         printf("%s\n", line);
//         printf("br: %d\n", br);
//         free(line);
//         system("leaks a.out");
//     }
//     printf("%s\n", line);
//     return (0);
// }