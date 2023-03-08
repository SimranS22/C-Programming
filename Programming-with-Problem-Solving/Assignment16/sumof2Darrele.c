// Write a C Program to find the sum of the elements in a 2D Array.

#include<stdio.h>
int main()
{
    int a[50][50],r1,c1,sum,i,j;
    sum=0;
    printf("Enter row value: ");
    scanf("%d",&r1);
    printf("Enter column value: ");
    scanf("%d",&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    printf("Sum of the array elements are : %d",sum);

    return 0;
}