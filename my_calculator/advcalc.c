#include<stdio.h>
#include "calc.h"


int main()
{
    char *string;


    string = get_input();

    printf("%s", string);
    
    /*switch(s)
    {
    case '+':
        sum(a, b);
        break;
    
    case '-':
        minus(a, b);
        break;
    
    case '/':
        div(a, b);
        break;
    
    case '*':
        times(a, b);
        break;
    
    default:
        printf("wrong symbol.");
    }*/


    return 0;
}