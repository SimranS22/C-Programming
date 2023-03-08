#include<stdio.h>
void TOH(int num, char s, char d, char a);

int main()
{
    int num;
    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("\nTower of Hanoi :\n");
    TOH(num, 'S', 'D', 'A');
    return 0;
}

void TOH(int num, char s, char d, char a)
{
    if (num == 1)
    {
        printf("\n %c -> %c", s, d);
        return;
    }
    else
    {
        TOH(num - 1, s, a, d);
        printf("\n %c -> %c", s, d);
        TOH(num - 1, a, d, s);
    }
}           