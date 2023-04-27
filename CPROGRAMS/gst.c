#include<stdio.h>
int main()
{
	int dig,n,fact,sum,temp;
	for(int i=1;i<100000;i++)
	{
		n=i;
		temp=n;
		sum=0;
		while(n>0)
		{
			dig=n%10;
			fact=1;
			for(int j=1;j<=dig;j++)
			{
				fact=fact*j;
			}
			sum=sum+fact;
			n=n/10;
		}
		if(sum==temp)
		{
			printf("%d ",i);
		}
	}
		return 0;
}

		


