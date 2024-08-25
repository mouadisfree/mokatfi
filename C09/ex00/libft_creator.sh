#!/bin/sh

# تجميع الملفات المصدرية وإنشاء ملفات object
gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# إنشاء المكتبة libft.a
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# فهرسة المكتبة
ranlib libft.a

