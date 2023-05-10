#include<stdio.h>
int main()
{
int n,i=0;
scanf("%d", &n);
while(i<=9)
{
	if(i==n)
	{
	i=i+1;
	continue;
	}
	printf("%d ",i);
	i=i+1;
}
return 0;
}


