// Q5) Write a C program to
// (i) find the multiplicative factor of 2
// (ii) find the divisive factor of 2
// of an even number [without using *,/]


#include<stdio.h>
int main()
{
    int n,a,res2,res1;
    do
    {
        printf("Enter a even number:\n"); 
        scanf("%d",&a);
        if (a%2!=0)
        printf("This is not an even number");
    }while(a%2!=0);
    printf("How many times do you want to count:"); scanf("%d", &n);
    res2=a>>n;
    res1=a<<n;
    printf("Multiplicative factor of zd; %d\n",a,res1); 
    printf("Divisive factor of zd; %d\n",a,res2);
    return 0;
}