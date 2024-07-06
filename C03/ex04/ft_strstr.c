#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int a;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i])
    {
        a = 0;
        while (str[i + a] != '\0' && str[i + a] == to_find[a])
        {
            if (to_find[a + 1] == '\0')
                return (str + i);
            a++;
        }
        i++;
    }
    return (0);
}

int main()
{
    char str[] = "mouad is free";
    char to_find[] = "weak";
    if(ft_strstr(str, to_find) != NULL)
    printf("%s\n", ft_strstr(str, to_find));
    else
	printf("not found\n");    
}

