#include <stdio.h>
void ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	while(i <= size - 1)
	{
		int j = i + 1;
		while(j <= size -1)
		{
			int tmp;
			if(tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}


int main(void)
{
	int tab[] = {3, 2, 1, 0};
	ft_sort_int_tab(tab, 4);
	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
}
