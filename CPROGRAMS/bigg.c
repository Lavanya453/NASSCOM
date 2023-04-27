#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],max=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("%d is the max num",max);
	return 0;
}
