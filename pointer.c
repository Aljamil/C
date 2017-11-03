#include <stdio.h>

int main(void)
{
	int *x;
	int a = 3;
	x = &a;

	printf("%d, %p.\n", a, &a);
	printf("%p, %d.\n", &x, *x);
}