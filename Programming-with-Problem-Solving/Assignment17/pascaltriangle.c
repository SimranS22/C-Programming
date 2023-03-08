// Write a C program for Pascal's Triangle.

//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
// 1 5 10 10 5 1


#include<stdio.h>
int factorial(int n);
int main()
{
    int fact,i,n,j,t,p,space;
    n=0;

    printf("Upto what row should the loop run: ");
    scanf("%d",&t);
    for(n=0;n<=t-1;n++)
    {
        for(space=1;space<=t-n-1;space++)
        {
            printf(" ");
        }
        for(j=0;j<=n;j++)
        {
            p=(factorial(n))/(factorial(j)*factorial(n-j));
            printf("%d ",p);
        }
        printf("\n");
    }

    return 0;
}
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}