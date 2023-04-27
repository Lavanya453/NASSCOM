#include<stdio.h>
int main()
{
	int a,g;
	scanf("%lc%d",&g,&a);
	if(g=='m'){
		if(a<249999){
			printf("not eligible");
		}
		else if(a<700001){
			printf("eligible for men");
		}
		else
		{
			printf("not eligible");
		}
	}
	else if(g=='f'){
		if(a<99999){
			printf("not eligible");
		}
		else if(a<500001){
			printf("eligible for female");
		}
		else{
			printf("not eligible");
		}
	}
	else{
		printf("other gender");
	}
	return 0;
}
