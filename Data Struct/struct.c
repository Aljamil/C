#include <stdio.h>

typedef struct{
	char *Card;
	int face; 
} aCard;

int main(void)
{
	 aCard a;
	 aCard *b;

	

	a.Card = "al";
	a.face = 23;

	printf("%s, %d\n", a.Card, a.face);
}