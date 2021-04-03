#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	char	*line;
    //int 	fd;

    //fd = open("get_next_line.h", O_RDONLY);
	//fd = 0;
	line = NULL;
	while (get_next_line(&line) > 0)
	{
		printf("[%s]\n", line);
		free(line);
		line = NULL;
	}
	printf("[%s]", line);
	free(line);
	line = NULL;
}