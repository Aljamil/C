#include <stdio.h>
#define SIZE 1000

void CPY(char *const, const char *const);

int main(void)
{

	char str1[SIZE];
	char *str2 = "Hello World!";

	CPY(str1, str2);

	printf("%s", str2);

	puts("");

}

void CPY(char *const a, const char *const b)
{
	size_t i = 0;

	for(i = 0; (a[i] = b[i]) != '\0'; i++)
	{
		;
	}
}