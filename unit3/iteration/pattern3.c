

/*

*
* *
* * *
* * * *
* * * * *

*/
#include<stdio.h>

int main()
{


    int rowMax = 5;
    int columnMax = 5;

    // outer loop
    for(int i=0;i<rowMax;i++)
    {

        // inner loop
        for(int j=0;j<=i;j++)
        {


            printf("* ");
        }

        printf("\n");
    }
    


    for(int l = 0;l<=3;l++)
    {
        for(int m = 3;m>=l;m--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}