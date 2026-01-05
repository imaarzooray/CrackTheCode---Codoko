#include <stdio.h>

int main()
{

    //  program detect which day

    printf("Enter the day number:");
    int dayNo;

    scanf("%d", &dayNo);

    switch (dayNo)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thrusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");

    default:
        printf("invalid input");
        
    }

    

    return 0;
}