//Calculate area of a triangle using semi perimeter s

#include<stdio.h>
#include<math.h>
int main()
{
    float Area,a,b,c,s;
    printf("Enter side 1: ");
    scanf("%f", &a);
    printf("\n");
    printf("Enter side 2: ");
    scanf("%f", &b);
    printf("\n");
    printf("Enter side 3");
    scanf("%f", &c);
    printf("\n");

    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {   
        printf("It is a triangle.");
        printf("\n"); 
        s=(a+b+c)/2;
        printf("The semi perimeter of the triangle is : %f", s);
        printf("\n");
        
        Area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The Area of the triangle is : %f",Area);
    }
    else
    {
        printf("It is not a triangle.");
    }
    return 0;

}