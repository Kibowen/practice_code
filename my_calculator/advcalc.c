#include<stdio.h>
#include "calc.h"


int main()
{
    int string;
    char *buffer;
    size_t *n = 0;

    string = _getline(&buffer, n, stdin);

    printf("%d", string);
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