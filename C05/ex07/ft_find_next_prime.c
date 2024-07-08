#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    if (nb <= 1)
        return 0;
    if (nb == 2)
        return 1;
    if (nb % 2 == 0)
        return 0;

    i = 3;
    while (i * i <= nb)
    {
        if (nb % i == 0)
            return 0;
        i += 2;
    }
    return 1;
}

int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return 2;
    while (!ft_is_prime(nb))
    {
        nb++;
    }
    return nb;
}

int main()
{
    int number = 18;
    int next_prime = ft_find_next_prime(number);
    printf("The next prime number greater than or equal to %d is %d.\n", number, next_prime);

    return 0;
}

