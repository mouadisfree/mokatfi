char *ft_strupcase(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "mOuad";
	printf("%s\n", ft_strupcase(str));
}
*/
