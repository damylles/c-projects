#include <stdio.h>

int main (void)
{
    printf("Enter two integers, and I will tell you\n");
    printf("the raltionship they satisfy: ");

    int num1;
    int num2;

    scanf("%d %d", &num1, &num2); //read two integer

    if(num1 == num2) {
        printf("%d is equal to %d\n", num1, num2);
    } // end if

    if(num1 != num2){
        printf("%d is not equal to %d\n", num1, num2);
    }
    if(num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    }

    if(num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    }

    if(num1 <= num2) {
        printf("%d is less than  or equal %d\n", num1, num2);
    }

    if(num1 >= num2) {
        printf("%d is greater than or equal  %d\n", num1, num2);
    }

    //end of the function main


}