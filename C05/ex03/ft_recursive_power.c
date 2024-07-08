#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int result = 1;

    if (power < 0)
        return 0;
    else if (power == 0)
        return 1;
        
    return nb * ft_recursive_power(nb, power - 1);
}

int main()
{
    int nb = 2;
    int power = 5;

    int result = ft_recursive_power(nb, power);
    printf("%d raised to the power of %d is %d\n", nb, power, result);

    return 0;
}

