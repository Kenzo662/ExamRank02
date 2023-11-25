#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}
int main(int ac, char **av)
{
    int i = 0;
    int j;

    if (ac != 2)
    {
        while(av[1][i])
            {
                write(1 ,&av[1][i], 1);
                i++;
            }
    }
    if (ac == 2)
    {
        while(av[1][i] == ' ') 
            i++;
        while (av[1][i] != ' ')
            i++;
        while(av[1][i] == ' ') 
            i++;
        while (av[1][i] != ' ' && av[1][i])
        {
            write(1, &av[1][i], 1);
            if (av[1][i + 1] == ' ')
                {
                    i += 1;
                    while (av[1][i] && av[1][i] == ' ')
                        i++;
                    write (1, " ", 1);
                }
            else
                i++;
        }
        i = 0;
        j = ft_strlen(av[1]);
        if (av[1][j - 1] != ' ')
            write (1, " ", 1);
        while(av[1][i] == ' ') 
            i++;
        while (av[1][i] != ' ')
        {
            write (1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}