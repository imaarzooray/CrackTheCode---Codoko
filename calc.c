#include<stdio.h>

int main()
{

    // 2 + 2 - input- 2,2 - opearnd and + - operator

    printf("Enter the statement: ");

    int op1, op2;
    char operator;
    int result;

    // 34^3
    // & - ampersand - address
    // %d %c -format specifier

    scanf("%d%c%d",&op1,&operator,&op2);


    if(operator=='+')
    {
    
        result = op1 + op2;
        printf("%d %c %d = %d",op1,operator,op1,result);
    }
    else if(operator=='-')
    {
         result = op1 - op2;
        printf("%d %c %d = %d",op1,operator,op2,result);
    }
    else if(operator=='*')
    {
         result = op1 * op2;
        printf("%d %c %d = %d",op1,operator,op2,result);
    }
    else if(operator=='/')
    {
        result = op1/op2;
        printf("%d %c %d = %d",op1,operator,op2,result);

    }
    else{
        printf("Invalid Input!");
    }
    




    return 0;
}