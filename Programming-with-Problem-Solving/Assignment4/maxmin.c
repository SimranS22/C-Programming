#include<stdio.h> 
int main()
{
    int choice,a,b,c,maxnum,minnum;
    printf("-- Max-Min Problems --");
    printf("\n1) Find max-min given 2 numbers");
    printf("\n2) Find max-min using if-else given 3 numbers");
    printf("\n3) Find max-min using ternary operator given 3 numbers");
    printf("\nEnter choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\nEnter 2 numbers\n");
        printf("Enter a : ");
        scanf("%d",&a);
        printf("Enter b : ");
        scanf("%d", &b);

        maxnum=(a>b)?a:b;
        minnum=(a<b)?a:b;
        printf("Max = %d\n",maxnum); 
        printf("Min = %d",minnum); 
        break;

    case 2:
        printf("\nEnter 3 numbers\n");
        printf("Enter a : ");
        scanf("%d",&a);
        printf("Enter b : "); 
        scanf("%d", &b);
        printf("Enter c: ");
        scanf("%d",&c);

        if (c>a&&c>b)
        { printf("Max = %d\n",c); }
        else if (b>a)
        { printf("Max = %d\n",b); } 
        else
        { printf("Max = %d\n",a); } 

        if (c<a&&c<b)
        { printf("Min = %d",c); } 
        else if (b<a)
        { printf("Min = %d",b); } 
        else
        { printf("Min = %d",a); }
        break;

    case 3:
        printf("\nEnter 3 numbers\n");
        printf("Enter a: ");
        scanf("%d",&a);
        printf("Enter b : ");
        scanf("%d",&b);
        printf("Enter c: "); 
        scanf("%d", &c);

        maxnum=(a>b)?(a>c?a:c):(b>c?b:c);
        minnum=(a<b)?(a<c?a:c):(b<c?b:c);
        printf("Max = %d\n",maxnum);
        printf("Min = %d",minnum);
        break;
        
    default:
        printf("Wrong choice!");
    }

return 0;
}