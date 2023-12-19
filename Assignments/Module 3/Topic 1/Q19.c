#include <stdio.h>

main(){
    double principle, rate, time, ci;
    printf("Enter the principle amount : ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate : ");
    scanf("%lf", &rate);
    printf("Enter the number of years : ");
    scanf("%lf", &time);
    ci = principle * (1.0 - 1.0 / (1.0 + rate) / (1.0 + rate) / (1.0 + rate) /(1.0 + rate));
    printf("Compound Interest : %.2lf\n", ci);
}
