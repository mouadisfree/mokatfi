#include <stdio.h>
#include <unistd.h>
char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
int main()
{
	
	char src[] = "mouad";
	char dest[10];
	
	
	printf("dest = %s\n", ft_strcpy(dest,src));

	



}

