// Write a menu driven program to do the following operations on a 1D array
// i) Creation
// ii) Insertion
// iii) Sorting
// iv) Searching
// v) Merge 2 arrays



#include <stdio.h> 
int binarysearch (int a[], int n, int element); 
void bubbles (int a[], int n);
void merge (int a[], int b[], int m, int n, int c[]);

int main()
{
    int a [100], i,j, n, ele, choice, index, b[100], m, c[100],loc;
    char option;
    printf("Size of array: ");
    scanf ("%d", &n);
    printf("In Elements of an array \n "); 
    for (i=0; i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    do 
    {
        printf("Array Menu:\n(1)Sort\n(2)Insert\n(3)Search\n(4)Merge two Arrays\n"); 
        printf("Choose choice: ");
        scanf ("%d", &choice); 
        switch (choice)
        {
            case 1: 
                printf ("\nSorting Array - Ascending Order\n");
                bubbles(a,n);
                printf("\nSorted Array: ");
                for (i=0; i<n; i++){
                    printf("%d ", a[i]);
                }
                break;

            case 2: 
                printf ("\nInsertion of Element in Array\n");
                printf("Element to insert: ");
                scanf("%d", & ele);
                if (n ==100)
                {
                    printf(" Too many Elements. ");
                    return 0;
                }
                printf("Enter the position at which you want the element: ");
                scanf("%d", &loc);
                if (((loc-1)>=0) && (loc-1)<=n-1)
                {
                    for (i=n; i> (loc-1); i--){
                        a[i]=a[i-1];
                    }
                    a[loc-1] = ele;
                    n=n+1;
                    printf("Altered array: ");
                    for (i=0; i<n; i++){
                        printf("%d ", a[i]);
                    }
                }
                else
                {
                    printf(" Invalid location");
                }
                break;

            case 3: 
                printf("\nBinary searching in Array\n"); 
                printf("Element to find: ");
                scanf ("%d", &ele);
                bubbles (a,n);

                printf("\nRearranged elements\n");
                for (i=0; i<n; i++)
                {
                    printf("%d", a[i]);
                }
                index = binarysearch (a,n, ele);
                if (index ==-1)
                    printf(" \n\nNo element exists.");
                else
                    printf("\n\n Using Binary Search\nElement \'%d\' found at pos :%d", ele, index + 1);
                break;
            case 4:
                printf("Merging of two arrays\n");
                printf("Creation of Second Array: \n"); 
                printf("Size of array: "); 
                scanf ("%d", &m);
                printf("\nElements of second array\n");
                for (j = 0; j<m; j++) {
                    scanf ("%d",&b[j]);
                }     
                bubbles (a,n); 
                bubbles (b, m);
                merge(a, b, m, n,c);
                printf("\nMerged array: ");
                for(i=0;i<(n+m);i++)
                {
                    printf("%d",c[i]);
                }
                break;
            default:
                printf("Wrong Choice!");
        }
        printf("Another Menu option(Y/y or N/n): ");
        scanf("%c",&option);
    }while(option=='Y'||option=='y');
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

int binarysearch(int a[], int n, int element)   //array is asc sorted
{ 
    int start,end,mid,i;
    start=0;
    end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(element==a[mid])
        {
            return mid;
        }
        else if(element>mid)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

void merge(int a[], int b[], int m, int n, int c[])
{
    int i,j,k;
    i=0;j=0;k=0;
    printf("\nThe merged array is:\n");
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
        
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while(j<m)
    {
        c[k++]=b[j++];
    }
}

            