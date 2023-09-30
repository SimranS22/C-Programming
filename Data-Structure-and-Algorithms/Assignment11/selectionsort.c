// Bubble Sort + Print all passes

#include<stdio.h>
void selectionsort(int [], int);
int main(){
    int a[50], i, n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    selectionsort(a,n);
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}

void selectionsort(int a[], int n){
    int temp, i, j, small, pos;
    for(i=0;i<n;i++){
        small=a[i];
        pos=i;
        for(j=i+1;j<n;j++){
            if(a[j]<small){
                small=a[j];
                pos=j;
            }
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;

        printf("\nAfter Pass - %d: ",i+1);
        for(j=0;j<n;j++){
            printf("%d  ",a[j]);
        }
    }
}