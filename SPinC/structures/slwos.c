#include<stdio.h>

int main()
{
	int count=0,i;
	char str[20]="Lavanya Gaddam";
	i=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	
	printf("length of string is %d ", count);
}
