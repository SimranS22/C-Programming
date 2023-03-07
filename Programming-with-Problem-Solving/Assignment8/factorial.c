// Q3)Write a C program to find the factorial of a number.
// f(n)=1 x 2 x 3 x ........ x n

#include<stdio.h>

int main ()
{
    int fact=1,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        fact*=i;
    }
    printf("The factorial of the number %d is %d",num,fact);

    return 0;
}