#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char a[50];
	int num;

	printf("Enter a string: ");

	fgets(a, 50, stdin);

	num = strlen(a);

	for(int i = 0; i < num - 1; i++)
	{
		printf("%c %s\n", a[i], isupper(a[i]) ? " is uppercase." : " is not uppercase.");
		printf("%c %s\n", a[i], islower(a[i]) ? " is lowercase." : " is not lowercase.");
	}
    puts("");

    for(int i = 0; i < num; i++)
    {
    	printf("%c", toupper(a[i]));
	}

    for(int i = 0; i < num; i++)
    {
    	printf("%c", tolower(a[i]));
    }

    puts("");
}