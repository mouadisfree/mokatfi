#include <stdio.h>
#include <stdbool.h>

// دالة تتحقق من صحة القاعدة العددية
bool is_valid_base(char *base) {
    int len = 0;
    for (int i = 0; base[i] != '\0'; i++) {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || base[i] < 33 || base[i] > 126)
            return false;
        for (int j = 0; j < i; j++) {
            if (base[j] == base[i])
                return false;
        }
        len++;
    }
    return len > 1;
}

// دالة للحصول على فهرس الحرف في القاعدة العددية
int get_index(char c, char *base) {
    for (int i = 0; base[i] != '\0'; i++) {
        if (base[i] == c)
            return i;
    }
    return -1;
}

// دالة لتحويل النص إلى عدد صحيح بناءً على القاعدة العددية
int ft_atoi_base(char *str, char *base) {
    if (!is_valid_base(base))
        return 0;

    int result = 0;
    int sign = 1;
    int base_len = 0;
    
    while (base[base_len])
        base_len++;
    
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    while (*str == '+' || *str == '-') {
        if (*str == '-')
            sign *= -1;
        str++;
    }

    int index;
    while ((index = get_index(*str, base)) != -1) {
        result = result * base_len + index;
        str++;
    }

    return result * sign;
}

// دالة main لاختبار الدالة ft_atoi_base
int main() {
    char str1[] = "   --++123";
    char base1[] = "0123456789";
    printf("Base 10: %s -> %d\n", str1, ft_atoi_base(str1, base1)); // يجب أن تطبع -123

    char str2[] = "   ---+--1011";
    char base2[] = "01";
    printf("Base 2: %s -> %d\n", str2, ft_atoi_base(str2, base2)); // يجب أن تطبع -11

    char str3[] = "  +1A3";
    char base3[] = "0123456789ABCDEF";
    printf("Base 16: %s -> %d\n", str3, ft_atoi_base(str3, base3)); // يجب أن تطبع 419

    char str4[] = "  +poney";
    char base4[] = "poneyvif";
    printf("Base custom: %s -> %d\n", str4, ft_atoi_base(str4, base4)); // يجب أن تطبع 503

    char str5[] = "  +42";
    char base5[] = "0123456";
    printf("Base 7: %s -> %d\n", str5, ft_atoi_base(str5, base5)); // يجب أن تطبع 24

    char str6[] = "  +42";
    char base6[] = "";
    printf("Invalid base: %s -> %d\n", str6, ft_atoi_base(str6, base6)); // يجب أن تطبع 0

    return 0;
}

