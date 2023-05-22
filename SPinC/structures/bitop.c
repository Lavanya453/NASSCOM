#include<stdio.h>
#define SET_BIT(X,P) X|=(1<<P)
#define CLEAR_BIT(X,P) X&=(~(1<<P))
#define TOGGLE_BIT(X,P) X^=(1<<P)
#define STATUS_BIT(X,P) X&=(1<<P)
#define GET_BIT(X,P) X=((X&=(1<<P)>>P))

void bin(unsigned int n)
{
	unsigned i;
	for(i=1<<31;i>0;i=i/2)
	{
		(n&i)?printf("1"):printf("0");
		
	}
}

int main()
{
	int X,P,temp;
	printf("enter the value and pos:");
	scanf("%d%d",&X,&P);
	temp=X;
	SET_BIT(X,P);
	printf("the value before SET_BIT is: \r\n");
	bin(temp);
	printf("\r\nthe value after SET_BIT is: \r\n");
	bin(X);
	printf("\n\n");
	
	// CLEARING A BIT
	X=temp;
	CLEAR_BIT(X,P);
	printf("the value before CLEAR_BIT is: \r\n");
	bin(temp);
	printf("\r\nthe value after CLEAR_BIT is: \r\n");
	bin(X);
	printf("\n\n");
	
	// toggle bit
	X=temp;
	TOGGLE_BIT(X,P);
	printf("the value before TOGGLE_BIT is: \r\n");
	bin(temp);
	printf("\r\nthe value after TOGGLE_BIT is: \r\n");
	bin(X);
	printf("\n\n");
	
	// STATUS BIT
	X=temp;
	STATUS_BIT(X,P);
	printf("the value before STATUS_BIT is: \r\n");
	bin(temp);
	printf("\r\nthe value after STATUS_BIT is: \r\n");
	bin(X);
	printf("\n\n");
	
	// GET BIT
	
	X=temp;
	GET_BIT(X,P);
	printf("the value before GET_BIT is: \r\n");
	bin(temp);
	printf("\r\nthe value after GET_BIT is: \r\n");
	bin(X);
	printf("\n\n");
	
	
	return 0;
}
