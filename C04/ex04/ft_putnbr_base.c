#include <unistd.h>

int is_valid_base(char *base)
{
    int i, j;

    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
            return 0;
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return 0;
            j++;
        }
        i++;
    }
    return i > 1; // Return 1 if base length is more than 1, otherwise 0.
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_len;
    long n;

    base_len = 0;
    if (!is_valid_base(base))
        return;
    while (base[base_len])
        base_len++;

    n = nbr;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= base_len)
    {
        ft_putnbr_base(n / base_len, base);
        ft_putnbr_base(n % base_len, base);
    }
    else
    {
        write(1, &base[n], 1);
    }
}

// دالة رئيسية لاختبار
int main()
{
    ft_putnbr_base(12345, "0123456789"); // في النظام العددي العشري الست عشري
    write(1, "\n", 1);

    ft_putnbr_base(-255, "01"); // في النظام العددي الثنائي
    write(1, "\n", 1);

    ft_putnbr_base(2147483647, "poneyvif"); // في النظام العددي الثماني
    write(1, "\n", 1);

    ft_putnbr_base(-2147483648, "0123456789"); // في النظام العددي العشري
    write(1, "\n", 1);

    return 0;
}

