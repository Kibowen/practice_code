#include<stdio.h>
#include "calc.h"

int main()
{
    int a;
    int b;
    char s;
    scanf("%d", &a);
    scanf("%c", &s);
    scanf("%d", &b);


    switch(s)
    {
    case '+':
        sum(a, b);
        break;
    
    case '-':
        minus(a, b);
        break;
    
    case '/':
        dive(a, b);
        break;
    
    case '*':
        times(a, b);
        break;
    
    default:
        printf("wrong symbol.");
    }


    return 0;
}