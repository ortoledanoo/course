#include <stdio.h>
//This Program Should Print "Hello World!" from Hex value array
int main()
{
	int i = 0;
	char hello_world[] = {
			 0x22, 0x48, 0x65, 0x6C, 0x6C, 0x6F,						 0x20, 0x57, 0x6F, 0x72, 0x6C, 0x64,						 0x21, 0x22, 0x00};

	printf("%s\n\n", hello_world);
	return 0;
}
