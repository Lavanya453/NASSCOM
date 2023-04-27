#include<stdio.h>
int main()
{
	char str1[50],str2[50],str3[50];
	gets(str1);
	gets(str2);
	int c1=0,c2=0,k=0;
	while(str1[c1]!='\0')
		c1++;
	while(str2[c2]!='\0')
		c2++;

		for(k=0;k<c1;k++)
			str3[k]=str1[k];
		str3[k]=' ';
		k++;
		for(int j=k,h=0;j<=c1+c2;j++,h++)
			str3[j]=str2[h];
	str3[c1+c2+1]='\0';
	
	printf("%s", str3);
	return 0;
}

