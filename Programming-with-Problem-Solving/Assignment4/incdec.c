// Q1) Check the Output and give reason.

#include<stdio.h> 
int main()
{
    int x=1;
    printf("%d %d %d %d\n",x++,++x,--x,x--);   //0 1 1 1
    printf("%d %d %d %d\n",--x,x--,++x,x++);   //1 3 1 1 
    return 0;
}

// Reason: When multiple values are cascaded out, calculations take
// place from right to left but the printing takes place from left to right.