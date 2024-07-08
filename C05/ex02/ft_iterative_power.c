#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result = 1;

    if (power < 0)
        return 0;
    else if (power == 0)
        return 1;
    else
    {
        while (power > 0)
        {
            result = result * nb;
            power--;
        }
    }
    return result;
}

int main()
{
    int nb = 2;
    int power = 5;

    int result = ft_iterative_power(nb, power);
    printf("%d raised to the power of %d is %d\n", nb, power, result);

    return 0;
}

