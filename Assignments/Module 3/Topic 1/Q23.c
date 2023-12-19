#include<stdio.h>

main(){
    float a,b;
    printf("Enter the first number,A : ");
    scanf("%f", &a);
    printf("Enter the second number,B : ");
    scanf("%f", &b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("After swapping:\n");
    printf("A : %.2f\n", a);
    printf("B : %.2f\n", b);
}

