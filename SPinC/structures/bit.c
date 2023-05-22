#include<stdio.h>

typedef struct
{
	int a:1;
	int b:1;
	int c:1;
}data;

int main()
{
	data d1;
	printf("%d is size", sizeof(d1));
	return 0;
}


