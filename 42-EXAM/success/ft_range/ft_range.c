#include<stdlib.h>
int *ft_range(int start, int end)
{
    int *range;
    int i;
    int len;

    if (start > end)
        len = (start - end) + 1;
    else
        len = (end - start) + 1;

    range = (int *)malloc(sizeof(int) * len);
    if (!range)
        return NULL;  // Handle memory allocation failure

    i = 0;
    while (len--)
    {
        range[i] = start;
        if (start < end)
            start++;
        else
            start--;
        i++;
    }

    return range;
}