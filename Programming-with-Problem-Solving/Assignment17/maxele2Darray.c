// Write a C program to find row, column and diagonal wise max element of a given 2D array.

#include<stdio.h>
int main()
{
    int a[100][100],r1,c1,i,j,maxr[50],maxc[50],maxdiag1,maxdiag2,maxrow,maxcol;

    printf("Number of rows:");
    scanf("%d",&r1);
    printf("Number of columns:");
    scanf("%d",&c1);
    printf("Input the array elements:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<r1;i++){
        maxrow=a[i][j];
        for(j=0;j<c1;j++)
        {
            if(maxrow<a[i][j])
            {
                maxrow=a[i][j];
                maxr[i]=maxrow;   
            }
        }
    }
    for(j=0;j<c1;j++)
    {
        maxcol=a[i][j];
        for(i=0;i<r1;i++)
        {
            if(maxcol<a[i][j])
            {
                maxcol=a[i][j];
                maxc[j]=maxcol;
            }
        }
    }
    for(i=0,j=0;i<r1,j<c1;i++,j++)

    {
    printf("MAX OF ROW %d IS %d\n",i+1,maxr[i]);
    printf("MAX OF COLUMN %d IS %d\n\n",j+1,maxc[i]);
    }
    maxdiag1=0;
    for(i=0;i<r1;i++)
    {
        if(a[i][i]>maxdiag1)
        {
            maxdiag1=a[i][i];
        }
    }
    printf("\nMAX OF MAIN DIAGONAL IS %d",maxdiag1);
    maxdiag2=0;
    for(i=0;i<r1;i++)
    {
        if(a[i][r1-i-1]>maxdiag2)
        {
            maxdiag2=a[i][r1-i-1];
        }
    }
    printf("\nMAX OF OTHER DIAGONAL IS %d",maxdiag2);

    return 0;
}