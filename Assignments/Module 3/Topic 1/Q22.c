#include<stdio.h>

main(){
	int i;
    float principle, rate, time, amount, compound_interest;
    printf("Enter the principal amount: ");
    scanf("%.2f", &principle);
    printf("Enter the rate of interest per annum: ");
    scanf("%.2f", &rate);
    printf("Enter the time in years: ");
    scanf("%.2f", &time);
    amount = principle;
    for ( i = 0; i < time; i++) {
        amount *= (1 + rate / 100);
    }
    compound_interest = amount - principle;
    printf("Principal Amount: $%.2f\n", principle);
    printf("Rate of Interest: %.2f%\n", rate);
    printf("Time in Years: %.2f\n", time);
    printf("Amount after compound interest: $%.2f\n", amount);
    printf("Compound Interest: $%.2f\n", compound_interest);
}
