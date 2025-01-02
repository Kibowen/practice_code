def calculate_compound_interest_with_contributions(principal, annual_rate, years, annual_contribution):
    # Convert annual interest rate to monthly and decimal
    monthly_rate = annual_rate / (12 * 100)
    months = years * 12
    
    # Initialize the amount for monthly compounding
    monthly_amount = principal
    
    # Iterate through each month for monthly compounding
    for month in range(1, months + 1):
        # Calculate the interest for the current month
        interest = monthly_amount * monthly_rate
        # Update the amount by adding the interest (contribution)
        monthly_amount += interest
        
        # At the end of each year, add the annual contribution
        if month % 12 == 0:
            monthly_amount += annual_contribution
    
    # Calculate the future value with annual compounding and annual contributions
    annual_amount = principal
    for year in range(1, years + 1):
        # Compound interest annually
        annual_amount = annual_amount * (1 + annual_rate / 100) + annual_contribution
    
    return monthly_amount, annual_amount

# Example usage
principal = 100000  # initial amount
annual_rate = 15   # annual interest rate in percent
years = 10       # number of years
annual_contribution = 50000  # additional contribution at the end of each year

monthly_future_value, annual_future_value = calculate_compound_interest_with_contributions(principal, annual_rate, years, annual_contribution)
print(f"The future value of the investment with monthly compounding is: ${monthly_future_value:.2f}")
print(f"The future value of the investment with annual compounding is: ${annual_future_value:.2f}")
