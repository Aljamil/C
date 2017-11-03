#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//int arr**;
    int N;
    int arr[N][N];

    printf("Enter the size: ");

    scanf("%d", &N);


    //srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
    	for(int j = 0; j < N; j++){

    		arr[i][j] = 1 + rand() % 100;
    		printf("%3d ", arr[j][i]);

    	}

    	puts("");
    }


}