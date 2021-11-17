#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <sys/syscall.h>
#include <errno.h>

int main()
{
    unsigned long ret = syscall(436);
    if(ret ==  -1)
    {
	    printf("%d\n", errno);
    }
    else
    {
	    printf("%lu\n", ret);
    }
    return 0;
}
