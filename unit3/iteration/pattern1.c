
/*

******
******
******
******
******
******


*/

#include<stdio.h>


void main()
{

    int rowMax = 6;
    int columnMax = 6;


    // outer loop -  row : i=3
    for(int i=0;i<rowMax;i++){

        // inner loop -  column
        for(int j=0;j<columnMax;j++)
        {
            printf("* ");
        }
        // 1  row compleltely print
        printf("\n");
    }

    
}