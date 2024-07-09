#include <stdlib.h>
#include <stdio.h>

// دالة تقوم بإنشاء نسخة مكررة من السلسلة النصية المدخلة
char *ft_strdup(char *src)
{
    int i = 0;
    char *dup;

    // حساب طول السلسلة النصية الأصلية
    while (src[i])
        i++;

    // تخصيص ذاكرة للنسخة المكررة بنفس طول السلسلة الأصلية زائد واحد للرمز النهاي '\0'
    dup = (char *)malloc((i + 1) * sizeof(char));
    if (dup == NULL)
        return NULL;

    // نسخ السلسلة النصية الأصلية إلى النسخة المكررة
    i = 0;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    // إضافة الرمز النهاي '\0' في نهاية النسخة المكررة
    dup[i] = '\0';

    return dup;
}

int main()
{
    char *src = "mouadisfree";
    char *dup;

    dup = ft_strdup(src);
    if (dup == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Original: %s\n", src);
    printf("Duplicate: %s\n", dup);

    // تأكد من تحرير الذاكرة بعد الاستخدام
    free(dup);

    return 0;
}

