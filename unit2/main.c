
#include <stdio.h>

int main()
{

    /*
    ? OPERATOR
    * PERFORMS OPERATIONS- ADDITION, SUBTRACTION, MODULUS, INCREMENT, AND, GREATER
    * Symbol: +, -, *, /, %, ++, --, =, *=, ==


    ? OPERAND
    * On which operator perform operations on them
    * eg: 2 * 3
    * here, 2 and 3 is OPERAND whereas * is OPERATOR


    ? TYPES OF OPERATOR
    1. Arithmetic : +,-,*,/,%
    2. Relational/ Comparison: >, <, ==, !=
    3. Logical Operator: &&, || and !
    4. Bitwise: | and &
    5. Assignment: =, *=, +=, -=
    6. Ternary operator/ Conditional: condition ? true : false
    7. Increment and Decrement:  ++ and -- (UNARY)

    ? UNARY OPERATOR
    * Operator which requries single operand
    * eg.. ++, --, !

    ? BINARY OPERATOR
    * Operator which requires two operands
    * eg.. +,*, % etc.. 2 + 3, 2 and 3 -two operands
    *
    */

    /*

    ? VARIABLE
    * name  of the container in which values are stored (name)
    * eg: num1, num2, name etc

    ? DATA TYPE
    * type of data will store in variables 
    eg: int, float, double, char, bool etc.

    ? EXAMPLE:
    * int num1 = 32;
    * int: data type- the variable num1 will contain INTEGER type of data
    * num1: variable in which value is stored which is 32
     */

    // ? Arithmetic Operator
    int num1 = 32;
    int num2 = 6;

    int result1 = num1 + num2;
    int result2 = num1 - num2;
    int result3 = num1 * num2;
    int result4 = num1 / num2;
    int result5 = num1 % num2;

    /*
    printf("Result: %d + %d = %d",num1,num2,result1);
    printf("\nResult: %d - %d = %d",num1,num2,result2);
    printf("\nResult: %d * %d = %d",num1,num2,result3);
    printf("\nResult: %d / %d = %d",num1,num2,result4);
    printf("\nResult: %d \'% %d = %d",num1,num2,result5);

    ? IMPORTANT:
    * % modulus/ modulo operator - calculates remainder



    ? ASSIGNMENT OPERATOR: - =,+=,-=,*=,/=
    *  eg: += means  + and =
    * combination of assignment and arithmetic operator
    *  num1  = num1 + 4 can be written as num+=3

    * Assignment operator
    int num3 = 34; 
    int num4 = 4;


    * num2 = num2 + 3

    
    printf("\nNum3: %d",num3);

    *num3+=3;  num3 = num3 + 3;
    printf("\nAfter calculation, Num3: %d",num3);

    *num3-=3;   num3 = num3 - 3;
    printf("\nAfter calculation, Num3: %d",num3);

    *num3*=3;  num3 = num3 * 3;
    printf("\nAfter calculation, Num3: %d",num3);

    *num3/=3;    num3 = num3 / 3;
    printf("\nAfter calculation, Num3: %d",num3);

    

    ? Relational/ Comparison OPERATOR 
    * Compares two or more values/ variables
    * output/ result:  boolean: (true and false) (1 and 0) (high/on and low/off)   (IMPORTANT)
    
    *Types: 
    == Equality operator
    > greater
    < less than
    != not equals to
    

    ?SYNTAX:  datatype variable_name = value; [formula]
    * Example: velocity = final dist - initial distance/time

    
    int a  = 3;
    int b =4;

    int c = 3==4;
    int d = 3<4;
    int e = 3>4;
    int f = 3!=4;

    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d",f);
    

    ? LOGICAL OPERATOR
    * logic/ computer  - 0 and 1
    * and (&&), or (||) or not (!)

    *operand: conditions(boolean)


    int num5 = 10;
    int num6 = 20;

    int comp1 = num5 > num6;   0
    int comp2 = num5 != num6;  1

    *&& - both operand true -> true
    printf("%d\n", comp1 && comp2);

    *|| - any one of operand is true -> true
    printf("%d\n", comp1 || comp2);

    * ! - not operator - opposite
    printf("%d", !comp2);

    */
    return 0;
}
