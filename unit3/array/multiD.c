
#include <stdio.h>
int main()
{

    /*

    1 2 3 4
    5 6 7 8
    9 0 1 2
    3 4 5 6

    */

    int matrix[4][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 0, 1, 2}, 
        {3, 4, 5, 6}};

    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}