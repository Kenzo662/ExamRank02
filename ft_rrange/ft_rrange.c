#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int size;
    int *range;
    int i = 0;
    int value = end;

    if (end > start)
        size = (end - start) + 1;
    if (start > end)
        size = (start - end) + 1;
    if (start == end)
        size = 1;
    range = malloc(sizeof(int *) * (size + 1));
    if (!range)
        return (NULL);
    while (i < size)
    {
        range[i] = value;
        
        if (start > end)
            value++;
        if (end > start)   
            value--;
        i++;
    }
    range[i] = '\0';
    return (range);
}
