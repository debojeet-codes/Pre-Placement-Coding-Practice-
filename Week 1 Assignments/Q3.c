// 3. Create a menu-driven program in C to 
// convert Celsius to Fahrenheit and vice versa based on user choice.

#include <stdio.h>

int main()
{
    int choice;
    float c, f;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter Celsius: ");
        scanf("%f", &c);

        f = (c * 9.0 / 5.0) + 32;

        printf("Fahrenheit = %.2f", f);
    }
    else if(choice == 2)
    {
        printf("Enter Fahrenheit: ");
        scanf("%f", &f);

        c = (f - 32) * 5.0 / 9.0;

        printf("Celsius = %.2f", c);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}