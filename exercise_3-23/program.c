#include <stdio.h>

//find the largest number

int main(void)
{
    unsigned int counter = 10, number = 0, largest = 0;

    while(counter > 0){
        printf("Enter a number: ");
        scanf("%u", &number);

        if(number > largest){
            largest = number;
        }
       

        --counter;
    }
     printf("The largest number is: %u\n", largest);
}