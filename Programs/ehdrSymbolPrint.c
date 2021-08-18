#include <stdio.h>
#include <string.h>
#include <sys/uio.h>
#include <elf.h>

#define STDOUT_FILENO 1

int main()
{
  // uint64_t temp = __ehdr_start;
  printf("Hello World \n");
}
