#include<stdio.h>
#define cutoff 75
typedef struct
{
	char name[20];
	int marks;
}students;

int main()
{
	 students s[5]={{"lavanya", 80},{"vinu",78},{"kartheek",76},{"priya", 53},{"pavan",60}};
	
	for(int i=0;i<5;i++)
	{
	
		if(s[i].marks > cutoff)
		{
			printf("%s\n", s[i].name);
		}
	}
return 0;
}
