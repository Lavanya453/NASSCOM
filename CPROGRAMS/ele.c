#include <stdio.h>
int main()
{
	int id;
       float	u,c;
	char name[20];
	scanf("%s%d%f",name,&id,&u);
	if(u<=199){
		c=1.2*u;
	}
	else if(u<400){
		c=1.5*u;
	}
	else if(u<600){
		c=1.8*u;
	}
	else{
		c=2.0*u;
	}
printf("charge on customer with name %s id %d u %f c %4.2f", name,id,u,c);
	return 0;
}

