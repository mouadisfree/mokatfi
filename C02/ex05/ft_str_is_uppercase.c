int ft_str_is_uppercase(char *str)
{
	
	while(*str != '\0')
	{
		if(*str >= 'A' && *str <= 'Z')
		{
			str++;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("MOUAD"));
	printf("%d\n", ft_str_is_uppercase("MOUAd"));
}
