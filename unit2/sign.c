#include <stdio.h>

int main()
{
    // Program which determine whether the number is positive, negative or zero

    // logic
    // number > 0 - positive
    // number < 0 - negative
    // 0

    printf("Enter the number:");
    int num;
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is Positive Number!", num);
    }
    else if (num < 0)
    {
        printf("%d is Negative Number!", num);
    }
    else
    {
        printf("%d is ZERO!", num);
    }

    return 0;
}