// Find the distinct and common elements of an array

#include<stdio.h>
#include <stdlib.h>
void ascsort(int a[], int n);
void mergedarray(int a[], int b[], int n1, int n2);
int ds(int a[], int n); //to get distinct elements
int main()
{
    int a[50],b[50],i,j,n1,n2,n11,n22;

    printf("Length of array1: ");
    scanf("%d",&n1);
    printf("Elements of array1\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nLength of array2: ");
    scanf("%d",&n2);
    printf("Elements of array2\n");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }

    if(n1==0||n2==0)
    { 
        printf(" No Elements. ");
        exit(1);
    }
    n11=ds(a,n1);
    printf("\narray1 without recurrence\n");
    for(i=0;i<n11;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\narray2 without recurrence\n");
    n22=ds(b,n2);
    for(j=0;j<n22;j++)
    {
        printf("%d ",b[j]);
    }
    ascsort(a,n11);
    ascsort(b,n22);
    printf("\nCommon elements of array1 and array2\n");
    for(i=0;i<n11;i++)
    {
        for(j=0;j<n22;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
            }
        }
    }
    printf("\nMerging array1 and array2 with no recurring elements\n");

    mergedarray(a,b,n11,n22);

    return 0;
}
void ascsort(int a[], int n)
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
void mergedarray(int a[], int b[], int n1, int n2)
{
    int i,j,k;
    i=0;j=0;k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            printf("%d ",a[i]);
            i++;
            k++;
        }
        if(a[i]>b[j])
        {
            printf("%d ",b[j]);
            j++;
            k++;
        }
        else if(a[i]==b[j])
        {
            printf("%d ",a[i]);
            i++;
            j++;
        }
    }
    while(i<n1)
    {
        printf("%d",a[i]);
        i++;
        k++;
    }
    while(j<n2)
    {
        printf("%d ",b[j]);
        j++;
        k++;
    }
}
int ds(int a[], int n)

{
    int i, j,k;
    for ( i = 0; i < n; i ++)  
    {  
        for ( j = i + 1; j < n; j++)  
        {  
            if ( a[i] == a[j])  
            {  
                // delete the current position of the duplicate element  
                for ( k = j; k < n - 1; k++)  
                {  
                    a[k] = a[k + 1];  
                }  
                // decrease n after removing duplicate element  
                n--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }
    return n;  
}

