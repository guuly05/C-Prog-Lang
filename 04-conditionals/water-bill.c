#include <stdio.h>

int main() 
{
    
    const double DEMAND_CHARGE = 35.00;
    const double USE_CHARGE_RATE = 1.10;
    const double LATE_CHARGE = 2.00;

    double unpaid_balance, previous_meter_reading, current_meter_reading;
    double use_charge, bill_amount;

    
    printf("Water Bill Calculation Program\n");
    printf("Please enter the following information:\n");

    
    printf("Enter unpaid balance: $");
    scanf("%lf", &unpaid_balance);
    printf("Enter previous meter reading (in thousands of gallons): ");
    scanf("%lf", &previous_meter_reading);
    printf("Enter current meter reading (in thousands of gallons): ");
    scanf("%lf", &current_meter_reading);

    
    double consumption = current_meter_reading - previous_meter_reading;
    use_charge = consumption * USE_CHARGE_RATE;

    
    double total_late_charge = 0;

    if (unpaid_balance > 0)
{total_late_charge = LATE_CHARGE;}

    
    bill_amount = DEMAND_CHARGE + use_charge + unpaid_balance + total_late_charge;

    
    printf("\n--- Water Bill Summary ---\n");
    printf("Demand charge: $%.2f\n", DEMAND_CHARGE);
    printf("Use charge (based on %.2f thousands of gallons): $%.2f\n", consumption, use_charge);
    printf("Unpaid balance: $%.2f\n", unpaid_balance);

    if (total_late_charge > 0) 
{ printf("Late charge: $%.2f\n", total_late_charge); }

    printf("--------------------------\n");
    printf("Total bill amount: $%.2f\n", bill_amount);

    return 0;
}
