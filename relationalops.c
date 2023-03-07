/*Use relational operators with printf statement*/

#include<stdio.h>
int main()
{ 
    int p=7,q=7,r=19;
    printf("%d === %d is %d \n", p, q, p == q); //1
    printf("%d == %d is %d \n", q, r, q == r);  //0

    printf("%d > %d is %d \n", r, p, r > p);    //1
    printf("%d > %d is %d \n", q, r, q > r);    //0
    printf("%d < %d is %d \n", p, q, p < q);    //0
    printf("%d < %d is %d \n", q, r, q < r);    //1

    printf("%d != %d is %d \n", p, q, p != q);  //0
    printf("%d != %d is %d \n", p, r, p != r);  //1

    printf("%d >= %d is %d \n", r, p, r >= p);  //1
    printf("%d >= %d is %d \n" , q, r, q >= r); //0
    printf("%d <= %d is %d \n" , p, q, p <= q); //1
    printf("%d <= %d is %d \n", q, r, q <= r);  //1
    return 0;
}