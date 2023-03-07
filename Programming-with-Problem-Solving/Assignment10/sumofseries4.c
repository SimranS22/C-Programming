// Q2) Write a C program to calculate sum of the following series:
// S= 1x2+2x3+3x4+.......+19x20

#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,n;
    printf("Enter number :");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        sum+=i*(i+1);
        if(i<(n-1))
        {
            printf("%d x %d + ",i,i+1);
        }
        else
        {
            printf("%d x %d = %d",i,i+1,sum);
        }
    }
    return 0;
}