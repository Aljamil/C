#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleS(int [], int);

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

	bubbleS(arr, size);

	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	puts("");
}

void bubbleS(int data[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n - 1; j++)
		
			if(data[j] > data[j + 1])
			{
				int temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		
	}
}