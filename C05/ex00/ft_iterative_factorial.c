#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result = 1;

    if (nb < 0) 
        return 0;
    
    if (nb == 0) 
        return 1;
    
    if(nb > 0)
    {
    while (nb > 0)
    {
        result = result * nb;
        nb--;
    }
    return result;
    }
}

int main()
{
    int number = 5;
    int factorial = ft_iterative_factorial(number);
    
    printf("Factorial of %d is: %d\n", number, factorial);
    
    return 0;
}

