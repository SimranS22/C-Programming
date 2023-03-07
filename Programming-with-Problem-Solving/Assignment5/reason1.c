// What can be used as an alternative to #include<stdio.h>

#include "stdio.h"

int main()
{
    printf("Hello World!");
    return 0;
}

// Reason: <stdio.h> searches in the standard C library locations only.
// “stdio.h” searches the current directory as well.