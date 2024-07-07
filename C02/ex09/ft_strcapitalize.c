char *ft_strcapitalize(char *str)
{
	int i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	
	
	
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z')))
		{
			if(str[i+1] >= 'a' && str[i+1] <= 'z')
			{
				str[i+1] -= 32;
			}
		}
		else if(str[i+1] >= 'A' && str[i+1] <= 'Z')
		{
			str[i+1] += 32;
		}
		
		i++;
	}
	return str;
}
#include <stdio.h>
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}
