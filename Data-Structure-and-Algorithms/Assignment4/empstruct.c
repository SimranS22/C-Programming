// Write a C program to store information of employee using structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
    char Name [50];
    int IDNO;
    int Salary;
};
int main()
{
    int N,i;
    struct employee A[50];

    printf(" Number of employees: ");
    scanf("%d",&N);
    printf(" Enter employee Details : \n");
    for (i=0; i<N; i++)
    {
        printf("\nEmployee %d\n", i+1);
        printf ("Name: ");
        scanf ("%s", &A[i].Name);
        printf("ID Number: ");
        scanf("%d", & A[i].IDNO);
        printf("Salary: ");
        scanf("%s", & A[i].Salary);
    }
    printf("\n");
    printf ("Name\tIDNO.\tSalary\n");
    for (i=0; i<N; i++)
    {
        printf("%s\t%d\t\t%d\n",A[i].Name,A[i].IDNO,A[i].Salary);
    }
    return 0;
}