#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return -1;
    else if (index == 0)
        return 0;
    else if (index == 1)
        return 1;
    else
        return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main()
{
    int index = 5;
    int result = ft_fibonacci(index);
    
    printf("Fibonacci number at index %d is: %d\n", index, result);
    
    return 0;
}

