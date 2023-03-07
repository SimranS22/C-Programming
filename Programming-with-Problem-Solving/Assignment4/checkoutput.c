// Q3) Check the Output of the given program.


#include<stdio.h> 
int main()
{
    int c,d; 
    c='a'-32;
    d=131-'B';
    printf("%d\t %d\n",c,d);    //65    65
    printf("%c\t %c\n",c,d);    //A     A
    return 0;
}