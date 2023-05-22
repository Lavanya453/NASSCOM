#include<stdio.h>

union item1
{
	char a[20];
	int c;
	char b;
};

int main()
{
	union item1 lav={"lavanya", 28, 'l'};
	printf("%s \n %d \n %c \n", lav.a, lav.c,lav.b);
	return 0;
}
	
