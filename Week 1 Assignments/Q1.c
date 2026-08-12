// 1. Write a C program to check whether a given integer is even or odd 
// and print whether it is also a multiple of 5.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    if(n % 5 == 0)
        printf(", Multiple of 5");

    return 0;
}