#include <stdio.h>

int main(void){
	if (-1 < (unsigned char)1)
		printf("A");
	else
		printf("B");

	if (-1 < (unsigned int)1)
		printf("A");
	else
		printf("B");
}
