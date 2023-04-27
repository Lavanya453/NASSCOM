#include<stdio.h>
int main()
{
	int n,tot=0;
	float avg;
	scanf("%d", &n);
	int marks[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(int j=0;j<n;j++)
	{
		tot=tot+marks[j];
	}
	avg=(float)tot/n;
	printf("%d is the total",tot);
	printf("\n%.2f is the avg", avg);
	return 0;
}

