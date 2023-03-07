// Q4)Write a C program to print the Fibonacci Series.
// f(n)=0,1,1,2,3,5,8.........f(n-2)

#include<stdio.h>
int main ()
{
    int first=0,second=1, third,n;
    printf("FIBONACCI SERIES\n");
    printf("Enter how many times you want the loop to run : ") ;
    scanf("%d",&n);

    printf("Fibonacci Series : %d, %d,",first,second);
    for(int i=1; i<=n; i++)
    {
    third =first + second;
    printf(" %d, ", third);
    first=second;
    second=third;
    }
    return 0;
}