#include<stdio.h>
int main()
{
	char str[50],rev[50];
	gets(str);
	int c=0;
	while(str[c]!='\0')
		c++;
for(int i=0,k=c-1;i<c;i++,k--)
{
	rev[i]=str[k];


}

printf("%s",rev);

		return 0;
		}


