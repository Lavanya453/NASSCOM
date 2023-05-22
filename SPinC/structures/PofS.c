#include<stdio.h>
struct car
{
	char brand[50];
	char model[50];
	int year;
	float milage;
};

void display(struct car *);

int main()
{
	struct car car1={ "BMW", "X5", 1999, 15.3};
	struct car *ptr=&car1;
	display(&car1);
	return 0;
}

void display(struct car *car2)
{
	printf("%s is the brand name\n", car2->brand);
	printf("%d is the year", car2->year);
}
