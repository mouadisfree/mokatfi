#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len = 0;
    unsigned int src_len = 0;
    unsigned int i = 0;

    while (dest[dest_len] != '\0' && dest_len < size)
        dest_len++;

    while (src[src_len] != '\0')
        src_len++;

    if (dest_len == size)
        return (size + src_len);

    i = 0;
    while (src[i] != '\0' && dest_len + i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    if (dest_len + i < size)
        dest[dest_len + i] = '\0';

    return dest_len + src_len;
}

int main()
{
    char dest[20] = "Hello";
    char src[] = " World!";
    unsigned int size = 12;

    unsigned int result = ft_strlcat(dest, src, size);
    printf("Result: %s\n", dest);
    printf("Length: %d\n", result);

    return 0;
}

