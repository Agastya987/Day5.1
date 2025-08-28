#include <stdio.h>
#include <math.h>   // for pow()

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    // Input principal, rate, and time
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    // Output
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", simple_interest, compound_interest);

    retur
