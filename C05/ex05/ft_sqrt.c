#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    if (nb < 0)
        return 0;

    i = 0;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return i;
        i++;
    }

    return 0;
}

int main()
{
    int number = 20;
    int result = ft_sqrt(number);

    if (result != 0)
        printf("The square root of %d is %d\n", number, result);
    else
        printf("%d does not have an integer square root.\n", number);

    return 0;
}

