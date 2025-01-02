#include <stdio.h>
#include <math.h>

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
    
    // Convert annual rate to a decimal
    double monthlyRate = (annualRate / 100) / 12;
    int months = years * 12;
    
    // Calculate the compound interest
    double compoundInterest = principal * pow(1 + monthlyRate, months);
    
    // Calculate the future value of a series (monthly contributions)
    double futureValueSeries = monthlyContribution * (pow(1 + monthlyRate, months) - 1) / monthlyRate;
    
    // Total future value
    double futureValue = compoundInterest + futureValueSeries;
    
    // Display the result
    printf("The accumulated amount after %d years is: %.2lf\n", years, futureValue);
    
    return 0;
}
