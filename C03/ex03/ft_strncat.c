char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int a;
	i = 0;
	a = 0;
	while(dest[a] != '\0')
	{
		a++;
	}
	while(src[i] != '\0' && i < nb)
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return dest;
}

#include <stdio.h>
int main()
{
	char str1[] = "isfree";
	char str2[] = "mouad";
	printf("%s\n", ft_strncat(str2, str1, 2));
}
