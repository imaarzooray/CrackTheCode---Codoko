
#include<stdio.h>

int main()
{

    /*
    leap Year

    - algorithm - steps to exuecture a program
    - a year is a leap year if it's divisible by 4 but not by 100, OR if it's divisible by 400. 
    - create variable year
    - 

    year/4 and not divisible by 100
    or
    year/400
    */ 

    int year = 2020;
 

    if( 
        ((year%4==0) && (year%100!=0))|| (year/400==0)
)
{
    printf("%d is a Leap Year!",year);
}
else{
    printf("%d is not a Leap Year!",year);
    
}
    return 0;
}