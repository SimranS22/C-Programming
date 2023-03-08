#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    float num;

    printf("Enter a number (Integer): ");
    scanf("%d",&n);
    printf("Enter a number (Float): ");
    scanf("%f",&num);

    printf("The absolute value of %d is %d.\n",n,abs(n));
    printf("The absolute value of %f is %f.\n",num,fabs(num));

    return 0;
}