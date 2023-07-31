#include <stdio.h>

//interest calculator

#define ANUAL_TERM 365


int main(void)
{
    float principal;
    float rate;
    int days;
    float interest;

    printf("Enter loan princiapl (-1 to end): ");
    scanf("%f", &principal);

    while(principal != -1){
        printf("Enter interest rate: ");
        scanf("%f", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = principal * rate * days / ANUAL_TERM;

        printf("The interest charge is $%.2f\n\n", interest);

        printf("Enter loan princiapl (-1 to end): ");
        scanf("%f", &principal);
    }
}