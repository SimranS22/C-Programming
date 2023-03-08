#include<stdio.h>
void merge(int a[], int low, int mid, int high);
void mergesort(int a[], int low, int high);
int main()
{
    int a[50],b[50],i,n,low,high;

    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("The array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);

    printf("The sorted array is: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void merge(int a[], int low, int mid, int high)
{
    int i,j,k,temp[100],n1,n2,temp1[100],temp2[100];
    n1=mid-low+1;
    n2=high-mid;

    for(i=0;i<n1;i++)
    {
        temp1[i]=a[low+i];
    }
    for(j=0;j<n2;j++)
    {
        temp2[j]=a[mid+1+j];
    }
    i=0;
    j=0;
    k=low;
    while(i<n1&&j<n2)
    {
        if(temp1[i]<=temp2[j])
        {
            temp[k]=temp1[i];
            i++;
        }
        else
        {
            temp[k]=temp2[j];
            j++;
        }
            k++;
    }
    while(i<n1)
    {
        temp[k]=temp1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        temp[k]=temp2[j];
        j++;
        k++;
    }
    for(i=low;i<k;i++)
    {
        a[i]=temp[i];
    }
}

void mergesort(int a[], int low, int high)
{
if (low >= high)
{

return;
}
else{

int mid = low + (high - low) / 2;
mergesort(a, low, mid);
mergesort(a, mid + 1, high);
merge(a, low, mid, high);
}
}