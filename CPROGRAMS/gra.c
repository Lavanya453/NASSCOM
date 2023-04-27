#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	if(m>90){
		printf(" grade is E stands for Excellent");
	}
	else if (m>=80){
		printf("grade is V stands for Very Good");
	}
	else if(m>=75){
		printf("grade is G stands for Good");
	}
	else if(m>=50){
		printf("grade is A stands for Average");
	}
	else{
		printf("grade is F stands for Fail");
	}
	return 0;
}

