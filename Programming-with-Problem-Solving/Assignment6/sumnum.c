// Sum of n numbers

#include<stdio.h> 
int main()
{
    int n,i,sum;
    printf("Enter n: "); 
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("Sum= %d",sum);
    return 0;
}