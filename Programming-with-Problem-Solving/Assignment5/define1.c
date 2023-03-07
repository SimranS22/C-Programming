// f(x)
#include<stdio.h>
#define f(x) (x*x)
int main()
{
    printf("%d", f(5+1));
    return 0;
}

// Reason: The function is performed like this
// => 5+1*5+1
// =>5+5+1
// =>11