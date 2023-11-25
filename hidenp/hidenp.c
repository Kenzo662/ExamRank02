#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    if (ac == 3)
    {
        while(av[2][j])
        {
            if (av[2][j] == av[1][i])
                i++;
            if (av[1][i + 1] == '\0')
            {
                write(1, "1\n", 2);
                return(1);
            }
            if (av[2][j + 1] == '\0' && av[1][i + 1] != '\0')
            {
                write(1, "0\n", 2);
                return(0);
            }
            j++;
        }
    }
    write (1, "\n", 1);
}