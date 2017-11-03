
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void insertS(int [], int);

int main(void)
{
	int size;

	printf("Enter the size: ");
	scanf("%d", &size);

	int arr[size];

	srand(time(NULL));

	puts("The elements are: ");
	
	for(int i = 0; i < size; ++i)
	{
		arr[i] =  1 + rand() % 100;
		printf("%d ", arr[i]);
	}

	puts("");

	puts("The sorted elements are: ");

	insertS(arr, size);

	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	puts("");
}

void insertS(int data[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int insert = data[i];
		int move = i;

		while((move > 0) && (data[move - 1] > insert))
		{
			data[move] = data[move - 1];
			move--;
		}

		data[move] = insert;
	}
}