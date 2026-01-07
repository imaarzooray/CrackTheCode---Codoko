#include<stdio.h>
int main()
{

   int matrix1[3][3];

   int matrix2[3][3];


   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        printf("[%d, %d]:",i,j);
        scanf("%d",&matrix1[i][j]);

    }
   }


   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        printf("[%d, %d]:",i,j);
        scanf("%d",&matrix2[i][j]);
    }
   }


   //multiplication
   int resultMatrix[3][3];

    for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
       resultMatrix[i][j] = matrix1[i][j]*matrix2[j][i];
       printf("%d ",resultMatrix[i][j]);
    }
    printf("\n");
   }

   
   

    return 0;
}