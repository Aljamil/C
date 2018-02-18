#include <stdio.h>
#include <stdlib.h>


void createMulti(int **, int);
void printMulti(int **, int);
void deleteMulti(int **, int);
void sumOfRows(int **, int);
void sumOfColumns(int **, int);
void sumOfDiagonals(int **, int);

int main(void)
{
	int N;
	int **array;

	printf("Enter the size: ");
	scanf("%d", &N);

	createMulti(array, N);
	printMulti(array, N);
	sumOfRows(array, N);
	sumOfColumns(array, N);
	sumOfDiagonals(array, N);
	
	deleteMulti(array, N);
}

void createMulti(int **arr, int size)
{
	size_t i, j;
	int ctr = 0;
	*arr = malloc(size * sizeof(int));
	for(i = 0; i < size; i++)
	{
		arr[i] = malloc(size * sizeof(int));
	}

	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			arr[i][j] = ++ctr;
		}
	}

	puts("");
} 

void printMulti(int **arr, int size)
{
	size_t i, j;
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf("%d ", arr[i][j]);
		}

		puts("");
	}

	puts("");
}

void deleteMulti(int **arr, int size)
{
	puts("DELETE THE MULTIDIMENSIONAL ARRAY !!!");
	size_t i;
	for(int i = 0; i < size; i++)
	{
		free(arr[i]);
	}


	free(*arr);
}

void sumOfRows(int **arr, int size)
{
	size_t i, j;
    int sum = 0, total = 0;

    for(int i = 0; i < size; i++)
    {
    	for(int j = 0; j < size; j++)
    	{
    		sum += arr[i][j];
    	}

    	printf("%d ", sum);

    	total += sum;
    	sum = 0;
    }
    puts("");

    printf("The sum of rows is %d.", total);
    puts("");
}

void sumOfColumns(int **arr, int size)
{
	size_t i, j;
    int sum = 0, total = 0;

    for(int i = 0; i < size; i++)
    {
    	for(int j = 0; j < size; j++)
    	{
    		sum += arr[j][i];
    	}

    	printf("%d ", sum);

    	total += sum;
    	sum = 0;
    }
    puts("");

    printf("The sum of columns is %d.", total);
    puts("");
}

void sumOfDiagonals(int **arr, int size)
{
	size_t i, j;
    int sum = 0, total = 0;
    int ctr1, ctr2;

    for(int i = 0; i < size; i++)
    {
    	ctr1 = i;
    	for(int j = 0; j < size; j++)
    	{
    		ctr2 = j;

    		if(i == j)
            {
    	       sum += arr[i][j];
    	    }
    	}

    	    printf("%d ", sum);
            total += sum;
    	    sum = 0;
    }
    puts("");

    printf("The sum of diagonals is %d.", total);
    puts("");
    puts("");
}