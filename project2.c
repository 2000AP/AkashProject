//Developer Akash Patil
#include <stdio.h>
int main()
{
    int a = 30, b = 10;
    printf("Before Swaping: \n");
    printf("The value of a and b is %d and %d.\n\n", a, b);
    a += b; // add a = a+b = 30+10 = 40 in a.
    b = a - b; // add value of a-b= 40 - 10 = 30 in b.
    a = a - b; // add value of a-b = 40-30 = 10 in a.
    printf("After Swaping: \n");
    printf("The value of a and b is %d and %d.\n\n", a, b);
    return 0;
}
