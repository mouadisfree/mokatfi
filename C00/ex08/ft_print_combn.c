#include <unistd.h>
void ft_putchar(char c)
{
        write(1, &c, 1);
}
void ft_print_combn(int n)
{
	if(n > 0 && n < 10)
	{
        int a;
        int b;

        a = 0;
        while(a <= 8)
        {
                b = a + 1;
                while(b <= 9)
                {
                        ft_putchar( a%10 +48);
                        ft_putchar( b%10 +48);
                        if(a != 8)
                        {
                                ft_putchar(',');
                                ft_putchar(' ');
                        }
                        b++;
                }
                a++;
        }
	}
}

int main()
{
        ft_print_combn(2);
        return 0;
}
