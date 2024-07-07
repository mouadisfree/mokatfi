#include <stdio.h>
int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;
	i = 0;
	sign = 1;
	result = 0;
	while(str[i] >= '0' && str[i] <= '9' || str[i] == '-' || str[i] == '+' || str[i] <= 32)
	{
		if(str[i] <= 32)
		{
			i++;
		}
		else if(str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
			{
				sign = -sign;
			}
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - 48);
		}
		i++;
	}
	return (result * sign);
}


