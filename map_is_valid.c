#include "bsq.h"

void map_is_valid(int fd, int len)
{
    char    *buffer = malloc(len);

    while (read(fd, &buffer, 1) == 1 && buffer[len] == '\n')
	{
	   
	}
    else
    {
        write(1, "map error\n", 10);
        return (-1)
    }
    free(buffer);
}

void    check_first_line(char *map)
{
    /*is invalid if a character is missing from the first line, or if two char-
acters (of empty, full and obstacle) are identical.
◦ The characters can be any printable character, even numbers.*/
}

void    check_length(char *map)
{
    
//lenghts should be the same
//strlen until \n
}

void    check_lines(char *map)
{
    // at least one line with 1 box
    //it needs to end with \n;
}

void    check_char(char *map)
{
    //can only be those introduced in the first line.
}

