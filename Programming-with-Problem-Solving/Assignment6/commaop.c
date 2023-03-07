
//Q4 comma op
#include<stdio.h> 
int main()
{
    int p,q,m,n,i,j,k; 
    m=(p=8,q=3,p-q); 
    printf("m=%d\n",m);
    n=(p=121,q=11,p/q);
    printf("n=%d\n\n\n",n); 
    for(i=10,j=20;i<=j; i++, j--)
    {
        printf("%d %d\n",i,j);
    }
    return 0;
}