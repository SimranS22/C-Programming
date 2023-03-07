// Check the output

#include<stdio.h> 
int main()
{
    float f=2.2;    //Line 1
    if (f==2.2) //Line 2
    { printf("CSE"); } 
    else
    { printf("ECE"); }
    return 0;
}

// Answer : ECE
// Reason: In line 2, 2.2 is actually of double data type. Hence, the line 1
// (2.2) and the line 2 (2.2) are not equal. In order to get the Output as
// “CSE”, we can fix the code by type casting (Explicit type conversion).