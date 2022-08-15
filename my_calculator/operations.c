#include<stdio.h>

/**
 * @brief adds up the numbers
 * 
 * @param a first value
 * @param b second value
 */
void sum(int a, int b)
{
    int addition;
    addition = (a + b);

    printf("= %d", addition);
}

/**
 * @brief subtracts the number
 * 
 * @param a first value
 * @param b second value
 */
void minus(int a, int b)
{
    int subtraction;
    subtraction = (a - b);
    
    printf("= %d", subtraction);
}

/**
 * @brief divides the numbers
 * 
 * @param a first value
 * @param b second value
 */
void dive(int a, int b)
{
    float division;
    division = (a / b);

    printf("= %.2lf", division);
}

void times(int a, int b)
{
    int multi;
    multi = (a * b);

    printf("= %d", multi);

}
