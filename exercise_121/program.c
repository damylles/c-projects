#include <stdio.h>

//summing the even integers from 2 to 100

int main(void)
{
   unsigned int sum = 0;

   for (unsigned int number = 2; number <= 100; number += 2) {
    sum += number;
   }
   printf("Sum is %u\n", sum);
}