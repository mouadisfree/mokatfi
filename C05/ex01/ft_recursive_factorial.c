#include <stdio.h>

int ft_recursive_factorial(int nb)
{
   
    if (nb < 0)
        return 0;
    
   
    if (nb == 0)
        return 1;
    
   
    return nb * ft_recursive_factorial(nb - 1);
}

int main()
{
    int number = 5; 
    int factorial = ft_recursive_factorial(number);
    
    printf("Factorial of %d is: %d\n", number, factorial);
    
    return 0;
}

