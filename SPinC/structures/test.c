#include<stdio.h>
int main()
{
struct a
{
	short i;
	char j[2];
	};
	struct a key;
	key.i=258;
	printf("%d,", key.j[0]);
	printf("%d", key.j[1]);
	return 0;
}
