#include<stdio.h>
#include<stdint.h>
int main()
{
uint16_t n,r;
scanf("%hd", &n);
r=n%7;
if(r==0)
{
	printf(" r is ZERO");
}
else if(r==1)
{
	printf(" r is ONE");
}
else if(r==2)
{
	printf(" r is TWO");
}
else if(r==3)
{
        printf(" r is THREE");
}
else if(r==4)
{
        printf(" r is FOUR");
}
else if(r==5)
{
        printf(" r is FIVE");
}
else if(r==6)
{
        printf(" r is SIX");
}
else if(r==8)
{
        printf(" r is EIGHT");
}
else
{
	printf(" r is NINE");
}
return 0;
}


