#include<stdio.h>
void selectionsort(int a[],int n);

int main()
{
    int a[50],n,i;

    printf("Number of elements: ");
    scanf("%d",&n);
    printf("The array elements are: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    selectionsort(a,n);
    printf("The sorted array is: ");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }

    return 0;
}

void selectionsort(int a[],int n)
{
    int small,pos,temp,i,j;
    for(i=0;i<n-1;i++)
    {
        small=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<small)
            {
                small=a[j];
                pos=j;
            }
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
}