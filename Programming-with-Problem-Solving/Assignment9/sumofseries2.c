// Q4) Write a C program to evaluate the expression:
// S= 1+ (x^2)/2!+ (x^3)/3! + ..... +(x^n)/n!

#include<stdio.h>
#include<math.h>

int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    { fact*=i; }
    return fact;
}

int main ()
{
    double sum=0,b;
    int n,x;
    clrscr();
    printf("Enter number x = ");

    scanf("%d",&x);
    printf("Enter upto what power =");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        b=pow(x,i)/(factorial(i));
        sum=sum+b;
        if(i<n)
        {
            printf(" %d^%d / %d + ",x,i,factorial(i));
        }
        else
        {
            printf("%d^%d / %d = %.2lf",x,i,factorial(i),sum);
        }
    }
    return 0;
}