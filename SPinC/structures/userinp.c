#include<stdio.h>
#include<string.h>
// #define cutoff 75
typedef struct
{
	char name[20];
	int marks;
}students;

int main()
{	
	int cutoff,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	students s[n];
	
	printf("enter the cutoff:");
	scanf("%d",&cutoff);
	for(int i=0;i<n;i++)
	{
		printf("enter name of student %d :", i+1);
		scanf("%s",s[i].name);
		printf("enter the marks :");
		scanf("%d", &s[i].marks);
	}
	
	printf("\neligible students are\n");
	for(int i=0;i<n;i++)
	{
	
		if(s[i].marks > cutoff)
		{
			printf("%s\n", s[i].name);
		}
	}
return 0;
}
