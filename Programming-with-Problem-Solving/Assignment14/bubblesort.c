// Write a C program for Bubble sort

#include<stdio.h>
void bubbles(int a[], int n);

int main()
{
    int a[50],i,n;

    printf("Size of array: ");
    scanf("%d",&n);

    printf("\nElements of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    bubbles(a,n);
    printf("\nSorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void bubbles(int a[], int n)
{ 
    int temp,j,i;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
}