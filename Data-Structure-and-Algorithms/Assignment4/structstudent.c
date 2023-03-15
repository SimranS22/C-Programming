// Write a C Program to store information of Students using structure.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char Name [50];
    char Stream [50];
    int RollNo;
    int ScoreCS;
    char Grade[50];
};
int main()
{
    int N,i;
    struct Student A[50];

    printf("Input number of Students: ");
    scanf("%d", & N);
    printf ("\nEnter Student Details: \n");

    for (i=0; i<N; i++)
    {
        printf("\nStudent %d\n", i+1);
        printf ("Name: ");
        scanf ("%s", &A[i].Name);
        printf("Roll No.: ");
        scanf("%d", & A[i].RollNo);
        printf("Stream: ");
        scanf("%s", & A[i].Stream);
        printf("CS Score : ");
        scanf("%d", & A[i].ScoreCS);
    }
    if(A[i].ScoreCS >= 60)
    {
        strcpy(A[i].Grade,"PASS");
    }
    else
    {
        strcpy(A[i].Grade, "FAIL");
    }
    printf("\n");
    printf ("Name\tRoll No.\tStream\tScoreCS\tGrade\n");
    for (i=0; i<N; i++){
        printf("%s\t%d\t\t%s\t%d\t%s\n",A[i].Name,A[i].RollNo,A[i].Stream, A[i].ScoreCS, A[i].Grade);
    }
    return 0;
}
