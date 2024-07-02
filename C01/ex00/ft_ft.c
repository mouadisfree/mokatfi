#include <unistd.h>
void ft_ft(int *nbr)
{
	*nbr = 42;
}
#include <stdio.h>
int main()
{
	int i = 13;
	int *nbr = &i;
	ft_ft(nbr);
	printf("%d", i);
}
