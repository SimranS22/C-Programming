
//Perform swap operation with third variable

#include<stdio.h> 
int main ()
{
    int a=7,b=39,c;
    printf("Before swap a=%d b=%d\n", a,b);
    c=a;
    a=b; 
    b=c;
    printf("After swap a=%d b=%d\n", a,b);
    return 0;
}
