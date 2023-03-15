// Write a C program for matrix addition.

#include<stdio.h>
int main()
{
    int i,j,k,r,c;

    printf("Number of rows: ");
    scanf("%d",&r);
    printf("Number of columns: ");
    scanf("%d",&c);

    printf("Matrix 1\n");
    printf("The array elements:\n");
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 2\n");
    printf("The array elements:\n");
    int b[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }

    printf("Matrix 3\n");
    printf("The array elements:\n");
    int f[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&f[i][j]);
        }
    }
    printf("Addition of the 3 matrices is possible.\n");
    int d[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        { 
            d[i][j]= a[i][j]+ b[i][j]+f[i][j];
        }
    }
    printf("Sum of 3 matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",d[i][j]);
            if(j==c-1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
    