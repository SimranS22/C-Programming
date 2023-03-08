// Q5) Write a C program using recursion

// Q2) Write a C program to observe the regisincremen function of a variable with register,auto,static

#include<stdio.h>
int sum (int n);
int Fibonacci(int n);
int factorial (int n);

int main()
{
    int choice,n,f,i;
    printf("-- Recursion Problems --");
    printf("\n1) Factorial of a number");
    printf("\n2) Fibonacci Series");
    printf("\n3) Sum of n natural numbers");
    printf("\nEnter choice :");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            printf("\nEnter a number: ");
            scanf("%d",&n);
            f=factorial(n);
            printf("\nFactorial of %d is %d\n", n,f);
        break;
        case 2:
            printf("\nEnter upto how many times : ");
            scanf("%d",&n);
            printf("Fibonacci series\n");
            for (i=0;i<n;i++)
            {
                printf("%d ", Fibonacci(i));
            }
        break;
        case 3:
            printf("\nEnter a number: ");
            scanf("%d",&n);
            printf("\nSum of natural numbers upto %d is equal to %d \n",n,sum(n));
        break;
        default: printf("Wrong Choice!");
        
    }
    return 0;
}

int factorial (int n)
{
    if (n==1)
        return (1);
    else
        return (n*factorial(n-1));
}
int Fibonacci(int n){
    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;
    else
        return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
int sum (int n)
{
    if(n!=0)
        return (n+sum(n-1));
    else
        return 0;
}