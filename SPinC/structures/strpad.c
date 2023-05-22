#include<stdio.h>
struct item1
{
	char a; //1 byte
	char b; // 1byte
	int c; // 4 bytes
};

struct item2
{
	char a;
	int c;
	char b;
};

// to avoid structure padding
// use #pragma pack(1) directive

#pragma pack(1)
struct item3
{
	char a; //1 byte
	char b; // 1byte
	int c; // 4 bytes
};
struct item4
{
	char a;
	int c;
	char b;
	}__attribute__((__packed__));;
	
int main()
{
	struct item1 data1; // variable declaration of the item1 type ...
	struct item2 data2;
	struct item3 data3;
	struct item4 data4;
	
	printf("The size of the item1 structure =%ld\r\n", sizeof(data1));
	printf("The size of the item1 structure =%ld\r\n", sizeof(data2));
	printf("The size of the item1 structure =%ld\r\n", sizeof(data3));
	printf("The size of the item1 structure =%ld\r\n", sizeof(data4));

return 0;
}

