#include <stdio.h>

void displayBits(unsigned int);

int main(void)
{
	int val;

	scanf("%u", &val);

	displayBits(val);
}

void displayBits(unsigned int value)
{
	unsigned int c;

	unsigned int displayMask =  1 << 31;

	printf("%10u = ", value);

	for(c = 1; c <= 32; c++)
	{
		putchar(value & displayMask ? '1' : '0');
		value <<= 1;

		if(c % 8 == 0)
			putchar(' ');
	}

	puts("");
}