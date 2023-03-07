
//Perform swap operation using a single line statement
#include<stdio.h>
int main ()
{
    int m=2, n=5;
    printf("Before swap : m=%d n=%d\n", m,n);
    n=n+m-(m=n) ;
    printf("After swap : m=%d n=%d\n", m,n);
    return 0;
}