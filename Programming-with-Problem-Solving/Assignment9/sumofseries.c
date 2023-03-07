// Q3) Write a C program to calculate the sum of the following series:
// S=1 + x + x^2 + x^3 + ..... +x^n

#include<stdio.h>
#include<math.h>

int main ()
{
    int sum=0,x,n;

    printf("Enter number x = ");
    scanf("%d",&x);
    printf("Enter upto what power =");
    scanf("%d",&n);

    for(int i=0;i<=n;++i)
    {
        sum+=pow(x,i);
        if(i<n)
        {
            printf(" %d^%d + ",x,i);
        }
        else
        {
            printf("%d^%d = %d",x,i,sum);
        }
    }

    return 0;
}