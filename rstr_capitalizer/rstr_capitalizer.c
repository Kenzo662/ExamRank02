#include <unistd.h>

int isnotalpha(char c)
{
    if ((c >= 0 && c <= 32) || c == 127)
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    int i;
    int j = 1;
    while (j < ac)
    {
        i = 0;
        while(av[j][i])
        {
            if (av[j][i] >= 'A' && av[j][i] <= 'Z')
                av[j][i] += 32;
            i++;
        }
        i = 0;
        while (av[j][i])
        {
            if ((av[j][i] >= 'a' && av[j][i] <= 'z') && (isnotalpha(av[j][i + 1]) == 1))
                av[j][i] -= 32;
            write(1, &av[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
    }
    if (ac == 1)
        write(1, "\n", 1);
}
