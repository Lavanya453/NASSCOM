#include<stdio.h>
int main()
{
int n;
scanf("%d", &n);
for(int i=0;i<=9;i++)
{
	if(i==n)
	{
	continue;
	}
	printf("%d ", i);
}
return 0;
}
