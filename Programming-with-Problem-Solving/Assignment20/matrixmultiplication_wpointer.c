// Write a C Program to perform matrix multiplication using pointer

#include<stdio.h>

int main()
{
    int A[100][100],B[100][100],C[100][100],i,j,k,r1,c1,r2,c2,sum;
    sum=0;

    printf("Matrix 1\n");
    printf("Number of rows: ");
    scanf("%d",&r1);
    printf("Number of columns: ");
    scanf("%d",&c1);
    printf("The array elements:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",(*(A+i)+j));
        }
    }
    printf("Matrix 2\n");
    printf("Number of rows: ");

    scanf("%d",&r2);
    printf("Number of columns: ");
    scanf("%d",&c2);
    printf("The array elements:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",(*(B+i)+j));
        }
    }
    if(c1==r2)
    {
        printf("Mulltiplication of the two matrices is possible.\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c1;k++)
                {
                    sum += (*(*(A+i)+k)) * (*(*(B+k)+j));
                }
                *(*(C+i)+j)=sum;
            }
        }
        printf("Multiplied matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ", *(*(C+i)+j));
                    if(j==c2-1)
                    {
                        printf("\n");
                    }
            }
        }
    }
    else
    {
        printf("Matrix multiplication is not possible.");
    }
    return 0;
}