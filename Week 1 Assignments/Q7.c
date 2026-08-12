// Given an array of N integers, find the second largest element 
// in a single pass without sorting. (in C)

#include <stdio.h>

int main()
{
    int n, i;
    int a[100];
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[1];

    if(second > largest)
    {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for(i = 2; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}