#include<stdio.h>
int main()
{
	int dig,n,fact,sum=0,temp;
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	
		dig=n%10;
		fact=1;
		for(int i=1;i<=dig;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("is strong number");
	}
	else{
		printf(" not strong");
	}

	return 0;
}

