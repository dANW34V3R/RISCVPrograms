#include <stdio.h>
#include <string.h>
#include <sys/uio.h>
#define STDOUT_FILENO 1
int main()
{
           char *str0 = "hello ";
           char *str1 = "world\n";
           struct iovec iov[2];
           ssize_t nwritten;

           iov[0].iov_base = str0;
           iov[0].iov_len = strlen(str0);
           iov[1].iov_base = str1;
           iov[1].iov_len = strlen(str1);

           nwritten = writev(STDOUT_FILENO, iov, 2);
}
