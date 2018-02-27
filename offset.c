#include <stdio.h>

#define SIZE 5

int main(void)
{
	int b[] = {2,-4,6,8,10};
	int *bPtr = b;

	unsigned i;

	puts("");

    puts("ARRAY SUBSCRIPT");
	for(i = 0; i < SIZE; i++)
	{
		printf("b[ %u ] = %d\n", i, b[i]);
	}
	puts("");

	puts("OFFSET NOTATION AS THE POINTER IS ARRAY");

	for (i = 0; i < SIZE; i++)
	{
		printf("b[%u] = %d\n", i , *(b + i));
	}
	puts("");

	puts("POINTER SUBSCRIPT");
	for(i = 0; i < SIZE; i++)
	{
		printf("b[ %u ] = %d\n", i, bPtr[i]);
	}
	puts("");

	puts("OFFSET NOTATION AS POINTER SUBSCRIPT");
	for(i = 0; i < SIZE; i++)
	{
		printf("b[ %u ] = %d\n", i, *(bPtr + i));
	}
	puts("");

	printf("The sum of %d and %d is %d.\n", *(bPtr + 1), *(b + 2), *(bPtr + 1) + *(b + 2));
}