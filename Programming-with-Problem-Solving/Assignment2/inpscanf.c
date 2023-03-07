/* Take user input using scanf ()*/
#include<stdio.h>
int main ()
{
    int p,q,r;
    printf("Enter num1 = ");    //4
    scanf("%d",&p);
    printf("Enter num2 = ");    //7
    scanf("%d",&q);
    r=p+q;
    printf("The sum of the two numbers are: %d",r); //11
    return 0;
}