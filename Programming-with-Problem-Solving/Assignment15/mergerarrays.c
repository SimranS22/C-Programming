// Merge the contents of two given arrays

#include<stdio.h>
void mergedarray(int a[], int b[], int n1, int n2);
void bubblesort(int a[], int n);
int main()
{
    int a[50],b[50],i,j,n1,n2;
    printf("Array 1\n");
    printf("Enter the size of array1 : ");
    scanf("%d",&n1);
    printf("The array1 elements:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");

    printf("Array 2\n");
    printf("Enter the size of array2 : ");
    scanf("%d",&n2);
    printf("The array2 elements:\n");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("\n");
    bubblesort(a,n1);
    printf("\n");
    bubblesort(b,n2);
    printf("\n");
    mergedarray(a,b,n1,n2);
    return 0;
}

void bubblesort(int a[], int n)
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
    printf("The sorted array is (ascending):");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}
void mergedarray(int a[], int b[], int n1, int n2)
{
    int i,j,k;
    i=0;j=0;k=0;
    printf("\nThe merged array is:\n");
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
        else
        if(a[i]==b[j])
        {
            printf("%d %d ",a[i],b[j]);
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