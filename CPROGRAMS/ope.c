#include <stdio.h>
int main()
{
	unsigned long int a=15, b=10;
	printf("value of a+b=%lu\n",a+b);
	printf("value of a-b=%lu\n",a-b);
	printf("value of a*b=%lu\n",a*b);
	printf("value of a/b=%lu\n",a/b);
	printf("value of %lu\n",a%b);
	printf("value of a++=%lu\n",a++);//15
	printf("%ld\n",a);//16
	printf("value of a--=%lu\n",a--);
	printf("%ld\n",a);
	printf("value of --a=%lu\n",--a);
	printf("%ld\n",a);
	printf("value of ++a=%lu\n",++a);
	printf("%ld\n",a);
	printf("value of a==b=%u\n",(a==b));
	printf("value of a!=b=%u\n", (a!=b));
	printf("value of a>=b= %u\n", (a>=b));
	printf("value of a<=b=%u\n", (a<=b));
	printf("value of a<b=%u\n", (a<b));
	printf("value of a>b=%u\n",(a>b));
	printf("value of a&&b=%u\n", (a&&b));
	

	return 0;
}

