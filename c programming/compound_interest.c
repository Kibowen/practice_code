#include <stdio.h>

int main() {
    double principal, annualRate, monthlyContribution;
    int years;

    // Get user inputs
    printf("Enter the principal amount (initial investment): ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &annualRate);
    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("Enter the monthly contribution: ");
    scanf("%lf", &monthlyContribution);

    // Check for invalid inputs
    if (principal <= 0 || annualRate <= 0 || years <= 0 || monthlyContribution <= 0) {
        printf("Invalid input. Please enter positive values.\n");
        return 1;
    }

    // Convert annual rate to a decimal
    double monthlyRate = ((annualRate / 100) / 12);

    // Calculate the accumulated amount
    double accumulatedAmount = principal;
    for (int i = 0; i < years * 12; i++) 
    {
        accumulatedAmount = (accumulatedAmount + monthlyContribution) * (1 + monthlyRate);
    }

    // Display the result
    printf("The accumulated amount after %d years is: %.2lf\n", years, accumulatedAmount);

    return 0;
}

