#include<stdio.h>
int main()
{
	int dig,n,max=0,temp;
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		dig=n%10;
		if(max<dig){
			max=dig;
		}
		n=n/10;
	}
	printf(" the max dig of %d is %d",temp,max);
	return 0;
}


