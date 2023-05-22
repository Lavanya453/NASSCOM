#include<stdio.h>
#include<stdint.h>

int main()
{
	int data=0x01234567;
	char *startByte=(char*)&data;
	int numbytes=sizeof(data);
	printf("int data= 0x%10X\r\n",data);
	
	printf("\r\n address\t data\r\n");
	for(int i=0;i<numbytes;i++)
	{
		printf("%p\t 0x%.2X\r\n", (startByte + i), startByte[i]);
	}
	
	printf("\r\n");
	return 0;
}
