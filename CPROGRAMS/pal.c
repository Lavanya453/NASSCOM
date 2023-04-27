#include<stdio.h>
int main()
{
	int n,rev=0,dig;
	int temp;
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		dig=n%10;
		rev=rev*10+dig;
		n=n/10;
	}
	if(temp==rev)
	{
		printf("%d  is palindrome",temp);
	}
	else{
		printf("not a palindrome");
	}
	return 0;
}
