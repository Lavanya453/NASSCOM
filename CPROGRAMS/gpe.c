#include <stdio.h>
int main()
{
	int n,sum;
	for(int i=1;i<=10000;i++)
	{
		n=i;
		sum=0;
		for(int j=1;j<n;j++)
		{
			if(n%j==0)
			{
				sum=sum+j;
				
			}
		}
		if(sum==n)
		{
			printf("%d ",n);
		}
	}
	return 0;
}
