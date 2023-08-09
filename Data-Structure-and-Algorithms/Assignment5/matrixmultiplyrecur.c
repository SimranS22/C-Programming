// Write a C program for matrix addition.

#include<stdio.h>
#define MAX 10

void mm(int a[MAX][MAX],int b[MAX][MAX]);
int c[MAX][MAX],i,j,k,r1,r2,c1,c2;
int main()
{
    int a[MAX][MAX],b[MAX][MAX],i,j,k;

    printf("Matrix 1\n");
    printf("Number of rows: ");
    scanf("%d",&r1);
    printf("Number of columns: ");
    scanf("%d",&c1);
    
    printf("Matrix 2\n");
    printf("Number of rows: ");
    scanf("%d",&r2);
    printf("Number of columns: ");
    scanf("%d",&c2);
   
    if(c1!=r2)
    {
        printf("Addition of two matrices is not possible.");
    }
    else{
        printf("Matrix 1 || Array elements:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
            scanf("%d",&a[i][j]);
            }
        }
        printf("Matrix 2 || Array elements:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
            scanf("%d",&b[i][j]);
            }
        }
        mm(a,b);
        printf("Result Matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
            printf("%d ",c[i][j]);
            if(j==c2 - 1){
                printf("\n");
            }
            }
        }
    }
    return 0;
}

void mm(int a[MAX][MAX],int b[MAX][MAX]){
    static int sum , i=0, j=0, k=0;
    if(i<r1){
        if(j<c2){
            if(k<c1){
                sum=sum+a[i][k]*b[k][j];
                k++;
                mm(a,b);
            }
            c[i][j]=sum;
            sum=0;
            k=0;
            j++;
            mm(a,b);
        }
        j=0;
        i++;
        mm(a,b);
    }
}