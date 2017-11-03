#include <stdio.h>


int main(void)
{
	int n, z = 1;;
	scanf("%d", &n);

	for(int i = 0; i <= n; i++)
	{
		for(int j = n; j > i; j--)
		{
			printf(" ");
		}
          printf("*");

		if(i > 0){
		for(int k = 1; k <= z; k++)
		{

			printf(" ");
		}
		z+=2;
		printf("*");
	   }

		puts("");
	}

	//z-=4;

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n - i; j++)
		{
			//printf(" ");

			printf(" ");
		}

		printf("*");

		//printf("* ");

		//puts("");
	}

	puts("");

	
}