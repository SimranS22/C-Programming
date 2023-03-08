// Q1)Write a C Program to find the sum of n given user input using array
// i)Using iteration
// ii)Using function
// ii)Using recursion

#include<stdio.h>
int sumfunc (int num,int n[]);
int sumrec (int number,int a[]);
int main()
{
    int arr[100],n,i,sum=0,choice;
    printf("-- Method to perform Sum of array elements --");
    printf("\n1) Iteration");
    printf("\n2) Function");
    printf("\n3) Recursion");
    printf("\nEnter choice :");
    scanf("%d",&choice);

    printf("\n\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    switch (choice)
    {
    case 1:
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
        printf("\nThe Sum of the elements present in the array is %d \n",sum);
        break;
    case 2:
        printf("\nSum = %d \n",sumfunc(n,arr));
        break;
    case 3:
        printf("\nSum of array elements = %d \n",sumrec(n,arr));
        break;
    default:
        break;
    }

return 0;
}

int sumfunc (int num,int n[])
{
    int sum=0;
    for (int i=0; i<num; i++)
    {
        sum=sum+n[i];
    }
    return sum;
}

int sumrec (int number,int a[])
{
    if(number==0)
    {
        return 0;
    }
    else
    {
        return a[number-1]+sumrec(number-1,a);
    }
}