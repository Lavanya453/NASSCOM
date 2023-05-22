#include<stdio.h>

void sum(int x, int y)
{
	printf("add is %d", x+y);
}
void sub(int x, int y)
{
	printf("sub is %d", x-y);
}
void mul(int x, int y)
{
	printf("mul is %d", x*y);
}
		
int main()
{
	int a=5,b=3;
	void (*ope[])(int ,int)={sum,sub,mul};
	int ch;
	printf("enter the choice: 0 for sum \n 1 for sub\n 2 for mul:\r\n");
	scanf("%d",&ch);
	if(ch>2)
	{
		printf("enter value is not in the list\r\n");
		return 0;
	}
	(*ope[ch])(a,b);
	
	return 0;
}


