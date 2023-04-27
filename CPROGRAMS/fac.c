#include<stdio.h>
int main()
{
	int n,fact=1;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if(i==0){
			continue;}

		fact=fact*i;
	}
	printf("fact of %d is %d",n,fact);
	return 0;
}


