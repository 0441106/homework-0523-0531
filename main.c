#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

void convertToUppercase(char *sPtr);

int main(void) {
	char string[] = "hOmeWorK 0523-0531";
	
	printf("The string before conversion is: %s\n",string);
	convertToUppercase(string);
	printf("The string after conversion is: %s\n",string);
	//return 0;
}

void convertToUppercase(char *sPtr) {
	while (*sPtr != '\0') {
		*sPtr = toupper(*sPtr);
		++sPtr;
	}
}


