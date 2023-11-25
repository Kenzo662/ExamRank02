#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while(av[1][i])
        {
            write(1, &av[1][i], 1);
            if (av[1][i + 1] >= 'A' && av[1][i + 1] <= 'Z')
            {
                av[1][i + 1] += 32;
                write(1, "_", 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}