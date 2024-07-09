#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *array;
    int i;
    int size;

    if (min >= max)
        return (NULL);

    size = max - min;
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL)
        return (NULL);

    i = 0;
    while (min < max)
    {
        array[i] = min;
        min++;
        i++;
    }
    return (array);
}

int main()
{
    int min = 5;
    int max = 10;
    int *result;
    int i;

    result = ft_range(min, max);
    if (result == NULL)
    {
        printf("NULL pointer returned\n");
        return 1;
    }

    i = 0;
    while (i < (max - min))
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");

    free(result);
    return 0;
}

