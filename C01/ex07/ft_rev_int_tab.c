#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int j = size - 1;
	int temp;
	while(i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
int main()
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, 6);
printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	
}
