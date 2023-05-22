#include<stdio.h>

int main()
{
	char a[20]="aB";
	int count=0,sum=0;
	while(a[count]!='\0')
	{
		count++;
	
	}
	
	for(int i=0;i<count;i++)
	{
		sum=sum+a[i];
	}
	
	printf("%d is the sum", sum);
	return 0;
}
