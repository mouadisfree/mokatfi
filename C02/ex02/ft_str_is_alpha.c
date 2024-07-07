int ft_str_is_alpha(char *str)
{
	int i = 0;
	if(str[i] == '\0')
	{
		return 1;
	}
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'A' && str[i] <= 'z') || (str[i] >= 'a' && str[i] >= 'z')))
		{
			return 0;
		}
		i++;
	}
	return 1;
}
/*#include<stdio.h>
int main()
{
	printf("%d\n", ft_str_is_alpha("MouadisFree"));
	printf("%d\n", ft_str_is_alpha("MouadisFree1!"));
	printf("%d\n", ft_str_is_alpha(""));

}*/
