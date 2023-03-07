// Q4) Write a C program to find the sum of n natural numbers using
// ii) Call by Value

#include<stdio.h>

int sum (int *);
int main()
{
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nThe Sum upto %d natural numbers is %d \n",n,sum(&n));
    return 0;
}

int sum (int *n)
{
    return ((*n)*(*n+1)/2);
}