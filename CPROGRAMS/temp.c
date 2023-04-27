#include <stdio.h>
int main()
{
	int temp;
	scanf("%d",&temp);
	if(temp<11){
		printf("very cold");
	}
		else if(temp<26)
		{
			printf("cold");
		}
	else if(temp<33)
	{
		printf("hot");
	}
	else if(temp<45){
		printf("very hot");
	}
	else{
		printf("extremely hot");
	}
	return 0;
}

