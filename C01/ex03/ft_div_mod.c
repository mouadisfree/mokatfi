#include <unistd.h>
#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
	
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

 int main()
{
	int x = 0;
	int y = 0;
	ft_div_mod(10,0,&x, &y);
	printf("%d\n%d", x, y);
}
