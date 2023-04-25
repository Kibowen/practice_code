#include <stdio.h>

/**
 * @brief checks if a number is positive or negative.
 * 
 * @return int 
 */

int main()
{
    int num;
    int rem;

    printf("type number: ");
    scanf("%d", &num);

    rem = num % 2;


    if(rem == 0)
        printf("it is positive\n");
    else
        printf("it is negative\n");


    return 0;

}