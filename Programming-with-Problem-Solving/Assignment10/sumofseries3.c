// Q1) Write a C program to evaluate the expression:
// S= 1+ (x^3)/3!+ (x^5)/5! + ..... +(x^n)/n!

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
    int n,x,q=0;
    char si;

    printf("Enter number x = ");
    scanf("%d",&x);
    printf("Enter upto what power =");
    scanf("%d",&n);
    do
    {
        if(n%2==0)
        {
            printf("Enter an odd number. ");
            printf("Enter upto what power =");
            scanf("%d",&n);
        }
    }while(n%2==0);
    
    printf("The Sum of the following series is : \n ");
    if(n%2!=0)
    {
        for(int i=1;i<=n;i+=2,q++)
        {
            b=(pow(-1,q)*pow(x,i))/(factorial(i));
            sum+=b;
            if(q%2!=0)
            {
                si='+';
            }
            else
            {
                si='-';
            }
            if(i<n)
            {
                printf("%d^%d / %d %c ",x,i,factorial(i),si);
            }
            else
            {
                printf("%d^%d / %d = %.2lf",x,i,factorial(i),sum);
            }
        }
    }
    return 0;
}