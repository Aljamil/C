#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter the number: ");
	scanf("%d", &num);


	for(int i = 0; i <= num; i++)
	{
		
		if(i == (num/2 + 1))
		{
			printf("^");
		}
		else{
			printf("  ");
		}
	}
	puts("");

	for(int i = 0; i < num; i++)
	{
		for(int j = num; j > i; j--)
		{
			printf(" ");
		}

		printf("/");
		for(int k = 1; k <= i; k++)
		{
			printf("*");
		}

		for(int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\\");

		puts(" ");
	}


	for(int i = num; i >= 0; i--)
	{
		for(int j = 0; j < num - i; j++)
		{
			printf(" ");
		}

		printf("\\");
		for(int k = 1; k <= i; k++)
		{
			printf("*");
		}

		for(int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("/");

		puts(" ");
	}

	puts("");

	for(int i = num; i >= 0; i--)
	{
		for(int j = 0; j < num-i; j++)
			printf(" ");

		for(int k = 0; k <= i; k++)
			printf("*");

		printf("\n");
	}


}