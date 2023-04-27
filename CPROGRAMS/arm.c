#include<stdio.h>
int main()
{
	int n,sum=0,r,arm;
	scanf("%d",&n);
	arm=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(arm==sum)
	{
		printf(" is armstrong");
	}
	else{
		printf(" not armstrong");
	}
	return 0;
}
	
