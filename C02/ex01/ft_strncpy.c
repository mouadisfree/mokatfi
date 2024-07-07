#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

int main()
{
	char src[] = "mouad";
       	char dest[50];	
	ft_strncpy(dest ,src, 3);

	printf("source: %s\n", src);
	printf("destination: %s\n", dest);
}

