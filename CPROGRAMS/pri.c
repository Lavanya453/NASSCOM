#include<stdio.h>
int main()
{
	int n, count=0;
	scanf("%d",&n);
	for(int i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(count>0){
		printf(" not a prime");
	}
	else{
		printf(" is prime");
	}
	return 0;
}
