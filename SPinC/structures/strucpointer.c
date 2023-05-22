#include <stdio.h>
#include<string.h>

typedef struct
{
	int roll_no;
	char name[30];
	char branch[40];
	int batch;
} student;

int main()
{
	student student1;
	student * studentptr = &student1;
	strcpy(student1.name, "LAVANYA");
	strcpy(student1.branch,"Electronics and Communication");
	student1.batch =2018;
	student1.roll_no= 453;
	
	printf("Display details \r\n");
	printf("Roll number is : %d\r\n", (*studentptr).roll_no);
	printf("Name is : %s\r\n", studentptr->name);
	printf("Branch is : %s\r\n", studentptr->branch);
	printf("Batch is : %d\r\n", (*studentptr).batch);
	return 0;
}
