/* Write a program to perform basic arithmetic operations of two variables
without user input.(Hint: +,-,*,/) */

#include<stdio.h>
int main()
{
    int a=15;
    int b=5;
    int c, d, e, f;

    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;

    printf("Value of c is %d",c); //20
    printf("\n");
    printf ("Value of d is %d",d); //10
    printf("\n");
    printf ("Value of e is %d",e); //75
    printf("\n");
    printf ("Value of f is %d",f); //3
    return 0;
}