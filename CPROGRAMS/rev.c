#include<stdio.h>
int main()
{
	int n,rev=0,dig;
	scanf("%d",&n);
	while(n>0)
	{
		dig=n%10;
		rev=rev*10+dig;
		n=n/10;
	}
	printf("rev of num is %d",rev);
	return 0;
}
