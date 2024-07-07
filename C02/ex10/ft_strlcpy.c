#include <stdio.h>


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (src[a] != '\0')
		a++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (a);
}
int main()
{
        char src[] = "mouad";
        char dest[50];  

        printf("source: %lu\n", ft_strlcpy(dest, src, 0));
        printf("destination: %s\n", dest);
}
