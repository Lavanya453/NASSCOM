#include<stdio.h>
int main()
{
	int n,sum,dig,temp;
	for(int i=0;i<1000;i++)
	{
		n=i;
		temp=n;
		sum=0;
		while(n>0)
		{
			dig=n%10;
			sum=sum+(dig*dig*dig);
			n=n/10;
		}
		if(sum==temp)
		{
			printf("%d ", sum);
		}
	}
	return 0;
}

