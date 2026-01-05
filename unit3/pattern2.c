/*

? 2.
*
* *
* * *
* * * *
* * * * *


1. WHile loop
*/

#include <stdio.h>
int main()
{

    int rowMax = 6;
    int columnMax = 6;

    // int i =0, j=0;
    int i = 0;
    
    while (i < rowMax)
    {
        int j=0;
        while (j < columnMax)
        {

            printf("* ");
            j++;
        }
        printf("\n");

        i++;
    }

    return 0;
}
