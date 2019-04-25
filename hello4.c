#include <stdio.h>

int main()
{
	const char* str = "Hello World!\n";
	
	FILE* fp = open("./hello4.txt","w");
	fputs(str, fp);
	close(fp);

	return 0;
}
