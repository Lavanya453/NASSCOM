#include<stdio.h>
#include<string.h>
int main()
{
	int k;
	char str1[20],str2[20];
	gets(str1);
	strcpy(str2,str1);
	strrev(str2);
	k=strcmp(str1,str2);
	if(k==0)
	{
		printf("palindrome");
	}
	else{
		printf(" not palindrome");
	}
	return 0;
}

			
