
void ft_ultimate_div_mod(int *a, int *b)
{
	if(*b != 0)
	{
		int div = *a / *b;
		int mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
#include <stdio.h>
int main()
{
	int x = 10;
	int y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("%d | %d", x, y);


}
