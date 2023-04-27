#include<stdio.h>
int main()
{
	char str[50],rev[50],temp[50];
	gets(str);
	int c=0,flag;
	while(str[c]!='\0')
		c++;
	for(int i=0,k=c-1;i<c;i++,k--)
	{
		rev[i]=str[k];
	}
	for(int i=0;i<c;i++)
	{
		if(str[i]==rev[i])
		{
		  temp[i]=str[i];}
		else
		{
			flag++;
			break;
		}
	}
	if(flag>0)
	{
		printf(" is not palindrome");
	}
	else
	{
		printf("%s is palindrome",temp);
	}



		return 0;
		}


