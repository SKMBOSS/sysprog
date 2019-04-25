#include <stdio.h>
#include <string.h>

int main()
{
	char* str = "Hello World!\n";
	write(1, str, strlen(str)); //시스템콜 

	return 0;
}
