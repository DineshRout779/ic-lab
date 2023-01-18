/*
Write a program that will exchange the values of three variables a, b and c as follows: the
variable b will hold value of a, c will hold the value of b and a will hold the value of the variable c.
*/

#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("\nValues before exchange: a = %d, b = %d, c = %d", a, b, c);

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("\nValues after exchange: a = %d, b = %d, c = %d", a, b, c);
    return 0;
}
