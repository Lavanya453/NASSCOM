#include<stdio.h>
int main()
{
int n;
scanf("%d", &n);
for(int i=n;i>=0;)
{
	printf("%d ", i);
	i=i-2;
}
return 0;
}
