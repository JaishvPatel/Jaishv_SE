#include <stdio.h>

main(){
    double salary, premium;
    printf("Enter the person's salary: ");
    scanf("%lf", &salary);
    premium = 0.10 * salary;
    printf("Insurance Premium: %.2lf\n", premium);
}
