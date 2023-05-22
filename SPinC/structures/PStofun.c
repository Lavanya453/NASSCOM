#include<stdio.h>
struct car
{
	char brand[50];
	char model[50];
	int year;
	float milage;
};

void display(struct car);

int main()
{
	struct car car1={ "BMW", "X5", 1999, 15.3};
	display(car1);
	return 0;
}

void display(struct car carb)
{
	printf("The car brand is %s\n", carb.brand);
	printf("The car model is %s\n", carb.model);
	printf("The car invented in the year %d\n", carb.year);
	printf("The car milage is  %f\n", carb.milage);
}
