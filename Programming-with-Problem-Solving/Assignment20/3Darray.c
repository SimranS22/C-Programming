// Display a contain of three-dimensional matrix.

#include<stdio.h>
int main()
{
    int i, j, k, a, b, c;
    int array[20][20][20] ;

    printf("Enter the number of arrays : ");
    scanf("%d",&a);
    printf("Input number of rows : ");

    scanf("%d",&b);
    printf("Input number of columns : ");
    scanf("%d",&c);
    printf("\nEnter the elements :\n");
    for ( i = 0; i < a; i++)
    {
        for ( j = 0; j < b; j++)
        {
            for ( k = 0; k < c; k++)
            {
                printf("array[%d][%d][%d] : ",i,j,k);
                scanf("%d",&array[i][j][k]);
            }
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            for(k=0; k<c; k++)
            printf("%d ",array[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}