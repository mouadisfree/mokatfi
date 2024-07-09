#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *array;
    int size;
    int i;

    if (min >= max)
    {
        *range = NULL;
        return (0);
    }

    size = max - min;
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL)
        return (-1);

    i = 0;
    while (i < size)
    {
        array[i] = min + i;
        i++;
    }
    *range = array;
    return (size);
}

int main()
{
    int *range;
    int size;
    int min = 5;
    int max = 10;
    int i;

    size = ft_ultimate_range(&range, min, max);
    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    if (range == NULL)
    {
        printf("Range is NULL\n");
        return 1;
    }

    i = 0;
    while (i < size)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");

    free(range);
    return 0;
}

