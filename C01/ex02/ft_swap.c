#include <unistd.h>
void ft_swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
#include <stdio.h>
int main(void)
{
	int x = 13;
	int y = 42;
	ft_swap(&x, &y);
	printf("x = %d\n", x);
	printf("y = %d", y);
}
