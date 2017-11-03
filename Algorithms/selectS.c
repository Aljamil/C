#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectS(int [], int);

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

	selectS(arr, size);

	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	puts("");
}

void selectS(int data[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		int smallest = i;

		for(int j = i + 1; j < n; j++){

		   if(data[smallest] > data[j]){
		   	  smallest = j;
		   }
		}

		   if(smallest > i)
		   {
		   	  int temp = data[smallest];
		   	  data[smallest] = data[i];
		   	  data[i] = temp;
		   }
	}

}