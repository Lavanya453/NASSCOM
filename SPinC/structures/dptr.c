#include<stdio.h>

int main()
{
	
	int *p,**d;
	int a=5;
	p=&a;
	d=&p;
	printf("deferencing double ptr %d \r\n", (**d));
	printf("deferencing  ptr %d ", (*p));
	return 0;
}
