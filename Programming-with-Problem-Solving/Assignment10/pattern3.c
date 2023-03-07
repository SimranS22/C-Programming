//    *
//   * *
//  * * *
// * * * *

#include<stdio.h>

int main()
{
    int n,i,j,sp;
    char c;

    printf("Enter n = ");
    scanf("%d",&n);
    printf("Enter charcter = ");
    scanf(" %c",&c);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}