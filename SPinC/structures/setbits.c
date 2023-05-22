#include<stdio.h>
#include<stdint.h>

int main()
{
	int n,count=0;
	printf("enter the number:");
	scanf("%d", &n);
	while(n)
	{
		if(n&1)
		{
		
			count++;
		}
		n=n>>1;
	}
	
	printf("\r\nThe count of SET_BITS is %d \r\n", count);
	return 0;
}
