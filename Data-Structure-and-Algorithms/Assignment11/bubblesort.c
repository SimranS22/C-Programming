// Bubble Sort + Print all passes

#include<stdio.h>
void bubblesort(int a[], int n);
int main(){
    int a[50], i, n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}

void bubblesort(int a[], int n){
    int temp, i, j, k;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("\nAfter Pass - %d: ",i+1);
        for(k=0;k<n;k++){
            printf("%d  ",a[k]);
        }
    }
}