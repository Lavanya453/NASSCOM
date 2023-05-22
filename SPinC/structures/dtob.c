#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,k=0,q,r;
	printf("enter the number:");
	scanf("%d", &num);
	int *arr=(int*)malloc(10*(sizeof(int)));

	while(num)
	{
		q=num/2;
		r=num%2;
		arr[k]=r;
		k++;
		num=q;
		if(q==1)
		{
			arr[k]=q;
			k++;
			arr[k]='\0';
			break;
		}
	}
	int b[k];
	
	for(int i=0;i<k;i++)
	{
		b[i]=arr[k-i-1];
	}
	for(int i=0;i<k;i++)
	{
		printf("%d", b[i]);
	}
	
	free(arr);
	return 0;
}
		
