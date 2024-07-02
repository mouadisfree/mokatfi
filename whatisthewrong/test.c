#include <stdio.h>

void increment(int a)
{
	a = a + 1;
}

int main()
{
	int a;
	a = 10;
	increment(a);
	printf("a = %d\n", a);
}
