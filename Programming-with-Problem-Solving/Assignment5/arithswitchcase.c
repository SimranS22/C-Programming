//Q5) Give an example of a switch – case program. (Example : Different Arithmetic Operations)


#include<stdio.h> 
int main()
{
    float a,b,c;
    int s;
    printf("Arithmetic operations\n"); 
    printf("1.Add (+)\n");
    printf("2.Subtract (-)\n");
    printf("3.Multiplication (*)\n");
    printf("4.Division (/)\n");
    printf("Choose an option: ");
    scanf("%d", &s);

    printf("Enter values of a and b\n");
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);

    switch(s)
    {
        case 1: 
            c=a+b;
            printf("The sum of the two numbers is : %.2f",c);
            break;
        case 2: 
            c-a-b;
            printf("The difference of the two numbers is : %.2f",c); 
            break;
        case 3: 
            c=a*b;
            printf("The multiplication of the two numbers is : %.2f",c); 
            break;
        case 4: 
            if (b==0){
                printf("Operation not possible.");
                break;
            }
            else
            {
                c=a/b;
                printf("The divison of the two numbers is : %.2f",c);
                break;
            }
            
        default: 
            printf("Error");
        }
    return 0;
}