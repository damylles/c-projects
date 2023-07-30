#include <stdio.h>

//credidt limit calculator

int main(void)
{
     int accountNumber;
     float begginingBalance;
     float totalCharge;
     float totalCredit;
     float creditLimit;
     float newBalance;

     printf("Enter  account number (-1 to end): ");
     scanf("%d",&accountNumber);

     while(accountNumber != -1){
        printf("Enter beggining balance: ");
        scanf("%f", &begginingBalance);

         printf("Enter total charges: ");
         scanf("%f", &totalCharge);

          printf("Enter total credits: ");
         scanf("%f", &totalCredit);

         printf("Enter credit limit: ");
         scanf("%f", &creditLimit);

         newBalance = begginingBalance + totalCharge - totalCredit;

         if(newBalance > creditLimit){
            printf("Account: %d\n", accountNumber);
            printf("Credit Limit: %.2f\n", creditLimit);
            printf("Balance: %.2f\n", newBalance);
            printf("Credit Limit Exceedet\n");
         }

        printf("\nEnter  account number (-1 to end): ");
        scanf("%d",&accountNumber);

     }
}