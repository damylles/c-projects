#include <stdio.h>

// sale comission calc.
#define WEEKLY_WAGE  200.00
#define PERCENT_COMISSION 0.09

int main(void)
{
    float weeklySales;
    float weeklySalary;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &weeklySales);

    while(weeklySales != -1){
        weeklySalary = WEEKLY_WAGE + (weeklySales * PERCENT_COMISSION);
        printf("Salary is $%.2f\n\n", weeklySalary);

        printf("enter sales in dollars (-1 to end): ");
        scanf("%f", &weeklySales);
 }

}