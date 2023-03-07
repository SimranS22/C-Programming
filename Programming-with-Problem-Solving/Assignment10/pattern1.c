// Q3) Write a C program to find the following pattern
// i) n=3
// *
// * *
// * * *

#include<stdio.h>

int main()
{
    int n;
    char c;
    printf("Enter n = ");
    scanf("%d",&n);
    printf("Enter character = ");
    scanf(" %c",&c);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}