#include<stdio.h>
int main()
{
	int m,p,c,mpc,mp;
	scanf("%d%d%d",&m,&p,&c);
	if(m>=65){
		if(p>=55){
			if(c>=50){
				mpc=m+p+c;
				if(mpc>=190){
					printf("eligible for admission");
			
				}

				else{
					mp=m+p;
					if(mp>=140){
						printf("eligible for admission");
					}
					else{
						printf("not eligible");
					}
				}
			}
			else{
				printf(" not eligible with che");
			}
		}
		else{
			printf("not eligible with phy");
		}

	}
	else{
		printf("not eligible with mat");
	}
return 0;
}
