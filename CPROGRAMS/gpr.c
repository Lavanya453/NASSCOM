#include<stdio.h>
int main()
{
	int n,count;
	
	for(int i=2;i<1000;i++)
	{
		n=i;
		count=0;
		for(int j=2;j<n/2;j++)
		{
			if(n%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
