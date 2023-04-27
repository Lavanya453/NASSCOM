#include<stdio.h>
int main()
{
	int n1,n2,n3,t;
	scanf("%d%d%d",&n1,&n2,&t);
	printf("%d %d",n1,n2);
	while(t>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf(" %d", n3);
		t--;
	}
	return 0;
}

	
