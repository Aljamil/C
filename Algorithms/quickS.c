#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int [], int, int);
void quickS(int [], int);

int binaryS(int data[], int n, int k)
{
	int low = 0;
	int high = n;
	

	while(low <= high)
	{
	   int mid = (low + high) / 2;

	   if(data[mid] == k)
	   	return mid;
	   else if(data[mid] > k)
	   	high = mid - 1;
	   else
	   	low = mid + 1;
	}

	return -1;
}

int main(void)
{
	int size, key;

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

	quickS(arr, size);

	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	puts("");

	printf("Enter the key: ");
    
    scanf("%d", &key);

    printf("The %d is located at %d.\n", key, binaryS(arr, size, key));
}

void quickS(int data[], int n)
{
	sort(data, 0, n - 1);
}

void sort(int data[], int left, int right)
{
	int low = left, high = right;
	int mid = data[(low + high) / 2];

	while(low <= high)
	{
		while(data[low] < mid)
			low++;
		while(data[high] > mid)
			high--;

		if(low <= high)
		{
			int temp = data[low];
			data[low] = data[high];
			data[high] = temp;
			low++;
			high--;
		}
	}

	if(low < right)
		sort(data, low, right);

	if(left < high)
		sort(data, left, high);
}