#include<stdio.h>
int main()
{
    int i,n,a=0;
    printf("Check whether the number is prime or not.\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=2;i<(n/2);i++)
    {
    if(n%i==0)
    {
        printf("%d is not a prime number.",n);
        a=1;
        break;
    }
    }
    if(a==0)
    {
        printf("%d is a prime number.",n);
    }
    return 0;
}