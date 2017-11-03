#include <stdio.h>



int fact(int);


int main(void)
{
	int num;

	printf("Enter the number: ");

	scanf("%d", &num);

	printf("The factorial of %d! is %d.\n", num, fact(num));
}

int fact(int n)
{
	if(n <= 0)
		return 1;
	else
		return n * fact(n - 1);
}