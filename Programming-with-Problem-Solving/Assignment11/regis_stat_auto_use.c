// Q2) Write a C program to observe the regisincremen function of a variable with register,auto,static

#include<stdio.h>
void regisincrement();
void autoincrement();
void statincrement();
int main()
{
    int choice;
    printf("-- Understanding register, static, auto --");
    printf("\n1) Auto");
    printf("\n2) Static");
    printf("\n3) Register");
    printf("\nEnter choice :");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            autoincrement();
            autoincrement();
            autoincrement();
            autoincrement();
        break;
        case 2:
            statincrement();
            statincrement();
            statincrement();
            statincrement();
        break;
        case 3:
            regisincrement();
            regisincrement();
            regisincrement();
            regisincrement();
        break;
        default: printf("Wrong Choice!");
        
    }
    return 0;
}

void regisincrement()
{
    register int c = 0;
    c++;
    printf(" %d ", c);
}
void autoincrement()
{
    auto int b = 0;
    b++;
    printf(" %d ", b);
}
void statincrement()
{
    static int a = 0;
    a++;
    printf(" %d ", a);
}