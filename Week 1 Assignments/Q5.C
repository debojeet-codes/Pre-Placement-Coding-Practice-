// Print all prime numbers between 2 given integers A and B and check divisibility up to √N. (in C)

#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, i, j, flag;

    printf("Enter two numbers: ");
    scanf("%d %d", &A, &B);

    printf("Prime numbers: ");

    for(i = A; i <= B; i++)
    {
        if(i < 2)
            continue;

        flag = 1;

        for(j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            printf("%d ", i);
    }

    return 0;
}