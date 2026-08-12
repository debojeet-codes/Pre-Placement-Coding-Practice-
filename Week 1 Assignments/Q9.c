// Simple Multiplication Table Generator — (inC)

#include <stdio.h>

int main()
{
    int n, terms, i;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    for(i = 1; i <= terms; i++)
    {
        printf("%d ", n * i);
    }

    return 0;
}