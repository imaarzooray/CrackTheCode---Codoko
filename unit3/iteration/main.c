#include <stdio.h>

int main()
{

    /*
    ? LOOPS and ITERATION:
    - repetition
    * types:
    entry controlled loop: execution completely depends condition:  for loop and while loop
    exit controlled loop: atleast one time execeute: do while loop



    * FOR LOOP
     - entry controlled
     - syntax:
     for(initialization; condition;increment/ decrement)
     {
      * code to be executed
     }

     ? DECLARATION AND INITIALIZATION
     int i; //declaration
     i = 2; // initialization
     int i = 2; // declaration + initialization



    */

    // print the hello world 10 times

    int i;
    // for(i=0; i<10; i++)
    // {
    //     printf("Hello World!\n");
    // }

    // nested loops

    for (int j = 0; j < 5; j++) // j=45
    {

        for (int k = 0; k < 5; k++)
        {
            printf("Hello World!");
        }
        printf("\n");
        // 5 + 5 +5 +5 +5
    }

    /*
    ?  WHILE LOOP
    - entry loop

    ? syntax:
    *------

    iniatialization;

    while(condition)
    {
        * code to be executed

        increment/ decrement;
    }
    */

    /*
    ? DO WHILE LOOP
    - exit controlled loop
    - executes atleast once

    syntax:

    initialization;
    do
    {
    ? code to be executed
    increment/ decrement;
    }
    while(condition);


    */

    return 0;
}