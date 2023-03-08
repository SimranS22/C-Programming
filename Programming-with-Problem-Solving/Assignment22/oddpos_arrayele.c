// Write a C Program to find the odd position elements of a given array. (in reverse order)

#include <stdio.h>
int main()
{
  int arr[100],n,i,*ptr=arr;
  printf("Number of array elements: ");
  scanf("%d",&n);
  printf("Array values:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Values present at odd position:\n");
  for(i=n-1;i>=0;i--)
  {
    if(i%2!=0)
    {
      printf("Array[%d]=%d\n",i,*(ptr+i));
    }
  }

  return 0;
}
