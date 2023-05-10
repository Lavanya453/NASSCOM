#include<stdio.h>
int main()
{
int n,dig,rev=0,ch;
scanf("%d", &n);
while(n>0)
{
	dig=n%10;
	rev=rev*10+dig;
	n=n/10;
}
while(rev>0)
{
	ch=rev%10;
	switch(ch)
	{
	case 0: printf("ZERO ");
		break;

	case 1: printf("ONE ");
		break;
	case 2: printf("TWO ");
		break;
	case 3: printf("THREE ");
		break;
	case 4: printf("FOUR ");
		break;
	case 5: printf("FIVE ");
		break;
	case 6: printf("SIX ");
		break;
	case 7: printf("SEVEN ");
		break;
	case 8: printf("EIGHT ");
		break;
	case 9: printf("NINE ");
		break;
	default: printf(" ");
		break;
}
	rev=rev/10;
}
return 0;
}
