#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mergeS(int [], int);
void merge(int [], int, int, int);
void sort(int[], int, int, int, int, int);
int binaryS(int[], int, int);

int main( void )
{
	int size, sKey;

	printf("Enter the size: ");
	scanf("%d", &size);

	int arr[size];

	puts("The elements are: ");

	srand(time(NULL));

	for(int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 100;
		printf("%d ", arr[i]);
	}
	puts("");

	mergeS(arr, size);

	puts("The sorted elements are: ");

	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	puts("");

	printf("Enter the search key: ");
	scanf("%d", &sKey);

	printf("The %d is found at %d.\n", sKey, binaryS(arr, size, sKey));
}

void mergeS(int data[], int N)
{
	merge(data, 0, N - 1, N);
}

void merge(int data[], int low, int high, int N)
{
	if (low < high)
	{
		int middle1 = (low + high)/ 2;
		int middle2 = middle1 + 1;

		merge(data, low, middle1, N);
		merge(data, middle2, high, N);

		sort(data, low, middle1, middle2, high, N);
	}
}

void sort(int data[], int low, int mid1, int mid2, int high, int N)
{
	int left = low;
	int right = mid2;

	int combined = low;
	int comb[N];

	while((left <= mid1) && (right <= high))
	{
		if(data[left] < data[right])
		{
			comb[combined++] = data[left++];
		}

		else{
			comb[combined++] = data[right++];
		}
	}

	while(left <= mid1)
	{
		comb[combined++] = data[left++];
	}

	while(right <= high)
	{
		comb[combined++] = data[right++];
	}

	for(int i = low; i < combined; i++)
	{
		data[i] = comb[i];
	}
}

int binaryS(int data[], int N, int key)
{
	int low = 0;
	int high = N;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(data[mid] == key)
			return mid;
		else if(data[mid] > key)
			high = mid - 1;
		else
			low = mid + 1;
	}

	puts("Not located!");
}