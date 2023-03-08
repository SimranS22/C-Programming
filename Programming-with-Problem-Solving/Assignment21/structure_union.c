// Write a C Program to take n user input using structure / union. (display also)
#include<stdio.h>
struct Input1
{
    int n1,x1[50] ;
};

int main()
{
    struct Input1 ipc1;
    int i;
    printf("Enter number of inputs you want to take(struct):");
    scanf("%d",&ipc1.n1);
    printf("Numbers are:\n");
    for(i=0;i<ipc1.n1;i++)
    {
        scanf("%d",&ipc1.x1[i]);
    }
    printf("The numbers are: \n");
    for(i=0;i<ipc1.n1;i++)
    {
        printf("%d ",ipc1.x1[i]);
    }
    return 0;
}