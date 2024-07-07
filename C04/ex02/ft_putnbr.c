#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else if(nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	else if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

#include <stdio.h>
int main()
{
	ft_putnbr(100);
}
