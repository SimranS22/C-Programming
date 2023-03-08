#include<stdio.h>
int main()
{
    int a[50],i,n,j,temp;

    printf("Size of array: ");
    scanf("%d",&n);
    printf("\nElements of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    printf("\nArray in Reverse\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}