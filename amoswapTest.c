#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   char *str;

	str = (char *) malloc(15);
	strcpy(str, "tutorialspoint");
   	printf("String = %s,  Address = %u\n", str, str);
	return 0;
}
