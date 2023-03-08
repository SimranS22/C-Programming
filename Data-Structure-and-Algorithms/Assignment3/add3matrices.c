// Write a C program for matrix addition.

#include<stdio.h>

int main()
{
    int i,j,k,r1,r2,r3,c1,c2,c3;

    printf("Matrix 1\n");
    printf("Number of rows: ");
    scanf("%d",&r1);
    printf("Number of columns: ");
    scanf("%d",&c1);
    printf("The array elements:\n");
    int a[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 2\n");
    printf("Number of rows: ");
    scanf("%d",&r2);
    printf("Number of columns: ");
    scanf("%d",&c2);
    printf("The array elements:\n");
    int b[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }

    printf("Matrix 3\n");
    printf("Number of rows: ");
    scanf("%d",&r3);
    printf("Number of columns: ");
    scanf("%d",&c3);
    printf("The array elements:\n");
    int c[r3][c3];
    for(i=0;i<r3;i++)
    {
        for(j=0;j<c3;j++)
        {
        scanf("%d",&c[i][j]);
        }
    }

    if(r1=r2&&c1==c2)
    {
        printf("Addition of the two matrices is possible.\n");
        addmatr(a,b,r1,r2,c1,c2);
        printf("Sum of 2 matrices:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",c[i][j]);
                if(j==c1-1)
                {
                    printf("\n");
                }
            }
        }
    }
    else
    {
        printf("Addition of two matrices is not possible.");
    }
    return 0;
}

void addmatr(int a[][], int b[][], int r1, int r2, int c1, int c2)
{
    int temp[100][100];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        { 
            temp[i][j]= a[i][j]+ b[i][j];
        }
    }
}