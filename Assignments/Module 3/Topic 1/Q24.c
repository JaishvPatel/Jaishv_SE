#include<stdio.h>

main(){
    int numEmployees = 5;
    int i;
    char names[numEmployees][50];
    float salary[numEmployees];
    float totalSalary = 0.0;
    float averageSalary;
    printf("Enter details for 5 employees:\n");
    for (i = 0; i < numEmployees; i++) {
        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter salary for employee %d: rs", i + 1);
        scanf("%f", &salary[i]);
        totalSalary += salary[i];
    }
    averageSalary = totalSalary / numEmployees;
    printf("\nEmployee Details and Salary:\n");
    for (i = 0; i < numEmployees; i++) {
        printf("Employee %d: %s, Salary: rs%.2f\n", i + 1, names[i], salary[i]);
    }
    printf("\nTotal Salary: $%.2f\n", totalSalary);
    printf("Average Salary: $%.2f\n", averageSalary);
}
