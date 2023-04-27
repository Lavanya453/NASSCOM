#include<stdio.hi>
int main()
{
	char str1[20],str2[20];
	gets(str1);
	int c=0,k=0,i=0;
	while(str1[c]!='\0')
	c++;
	for( i=0;i<c;i++)
	{
		if(str1[i]=='a' || str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A' ||str1[i]=='E' || str1[i]=='I' || str1[i] =='O' || str1[i]=='U')
		{
			str2[k]=str1[i];
			k++;
			str1[i]=' ';
		}
	}
	i=0;
	while( str1[i]!='\0')
	{
		if(str1[i] !=' '){
	       str2[k]=str1[i];
		k++;

		}
	i++;
	}	       
	str2[i]='\0';
	printf("%s",str2);
	return 0;
}

