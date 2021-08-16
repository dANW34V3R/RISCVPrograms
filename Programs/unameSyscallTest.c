#include <stdio.h>
#include <sys/utsname.h>


int main(int argc, char *argv[]) {
	struct utsname unameData;
	uname(&unameData);
	printf("%s", unameData.sysname);
}
