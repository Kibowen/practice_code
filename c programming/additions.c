#include <stdio.h>

int integer_add(int x, int y)
{
    int sum;

    sum = x + y;
    return sum;
}

int main()
{
    int x = 5;
    int y = 12;
    int sum = integer_add(x, y);

    printf("The sum of %d and %d is: %d\n", x, y, sum);
    return 0;
}
