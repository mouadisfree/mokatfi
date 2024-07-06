char *ft_strcat(char *dest, char *src)
{
	int i;
	int a;
	i = 0;
	a = 0;
	while(dest[a] != '\0')
	{
		a++;
	}
	while(src[i] != '\0')
	{
		
		
		dest[a] = src[i];
		i++;
		a++;
		
	}
	dest[a -= 2] = '\0';
	return dest;
}
#include <stdio.h>
int main()
{
	char str1[] = "isfree";
	char str2[] = "mouad";
	printf("%s\n", ft_strcat(str2, str1));
}
