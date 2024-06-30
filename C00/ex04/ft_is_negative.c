#include <unistd.h>
void ft_is_negative(int n)
{

	if(n < 0)
	{
		char c = 'N';
		write(1, &c, 1);
	}
	else if(n > 0)
	{
		write(1, &"p", 1);
	}
}
