// Q4) Write a C program to find the sum of n natural numbers using
// i) Call by Value

#include<stdio.h>
int sum (int n);
int main()
{
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nSum = %d \n",sum(n));

    return 0;
}
int sum (int n)
{ 
    int sum=0;
    for (int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}