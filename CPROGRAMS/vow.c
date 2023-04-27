#include <stdio.h>
int main()
{
	char g;
	scanf("%c", &g);
	switch(g){
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':
			printf("char is vowel");
			break;
		default:
			printf(" char is consonant");
		}
	return 0;
}
           
