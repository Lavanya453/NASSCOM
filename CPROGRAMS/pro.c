#include <stdio.h>
int main()
{
	int sp,cp,p;
	scanf("%d%d", &sp,&cp);
	p=sp-cp;
	if(p>0){
		printf(" it is profit");
	}
	else if(p==0){
		printf(" neither profit nor loss");
	}
	else{
		printf(" it is loss");
	}
	return 0;
}



