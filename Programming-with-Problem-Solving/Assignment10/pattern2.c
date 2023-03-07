// * 
// * *
// * * *

#include<stdio.h>
int main()
{
    int n,i,j,k;
    char c;
    printf("Enter n = ");
    scanf("%d",&n);
    printf("Enter character = ");
    scanf(" %c",&c);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }

        for(k=1;k<=i;k++)
        {
            printf("%c",c);
        }
        printf("\n");
    }

    return 0;
}