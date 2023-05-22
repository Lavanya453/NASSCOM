#include<stdio.h>
struct car
{
	char brand[50];
	char model[50];
	int year;
	float milage;
};

void display(struct car []);
int main()
{
	struct car car1[4] = {{"BMW","X5",1999,15.3},{"BENZ","X7", 2000, 17.8},{"RR","X8",2001,20.9},{"SUZIKI","X9",2022,18.4}};
	display(car1);
	return 0;
	}

void display(struct car c[])
{
	printf("The car brand is %s ", c[0].brand);
	printf("The car model is %s ", c[0].model);
	printf("The car invented in the year %d ", c[0].year);
	printf("The car milage is  %f\n", c[0].milage);
	
	printf("The car brand is %s ", c[1].brand);
	printf("The car model is %s ", c[1].model);
	printf("The car invented in the year %d ", c[1].year);
	printf("The car milage is  %f\n", c[1].milage);
	
	printf("The car brand is %s ", c[2].brand);
	printf("The car model is %s ", c[2].model);
	printf("The car invented in the year %d ", c[2].year);
	printf("The car milage is  %f\n", c[2].milage);
	
	printf("The car brand is %s ", c[3].brand);
	printf("The car model is %s ", c[3].model);
	printf("The car invented in the year %d ", c[3].year);
	printf("The car milage is  %f\n", c[3].milage);
	
}
