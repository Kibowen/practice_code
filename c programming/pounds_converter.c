
#include <stdio.h>

float pound_to_kilo(int x)
{
    return x * 2.205;
}

float kilo_to_pound(int y)
{
    return y / 2.205;
}

int main(){

    float num;
    float conv;
    int choice;

    printf("1. to pounds\n2. to kilos\n: ");
    scanf("%d", &choice);

    printf("type number: ");
    scanf("%f", &num);

    switch (choice)
    {
    case (1):
        conv = pound_to_kilo(num);
        printf("%f pounds is %.2f kilos\n", num, conv);
        break;
    case (2):
        conv = kilo_to_pound(num);
        printf("%f kilo is %.2f pounds\n", num, conv);
        break;
    default:
        printf("choice doesn't exist");
        break;
    }
}