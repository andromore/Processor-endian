#include <stdlib.h>
#include <stdio.h>

#define elif else if 

int main()
{
    char* a = (char*) malloc(2);
    a[0] = 0;
    a[1] = 1;
    short* b = (short*) a;
    if (*b == 256)
        printf("Big-endian\n");
    elif (*b == 1)
        printf("Little-endian\n");
    else
        printf("Exception\n");
    return 0;
}