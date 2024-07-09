#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int total_len = 0;
    char *result;
    int i;
    int sep_len = ft_strlen(sep);

    if (size == 0)
    {
        result = (char *)malloc(1);
        result[0] = '\0';
        return result;
    }

    for (i = 0; i < size; i++)
        total_len += ft_strlen(strs[i]);
    
    total_len += sep_len * (size - 1) + 1;

    result = (char *)malloc(total_len * sizeof(char));
    if (!result)
        return NULL;

    result[0] = '\0';

    for (i = 0; i < size; i++)
    {
        ft_strcpy(result + ft_strlen(result), strs[i]);
        if (i < size - 1)
            ft_strcpy(result + ft_strlen(result), sep);
    }

    return result;
}

int main()
{
    char *strs[] = {"Hello", "world", "this", "is", "ft_strjoin"};
    char *sep = " ";
    char *result = ft_strjoin(5, strs, sep);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}

