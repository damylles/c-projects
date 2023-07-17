#include <stdio.h>

int main (void)
{
    printf("Enter three numbers: \n");

    int x, z, y;
    scanf("%d%d%d", &x, &z, &y);

    int sum;
    sum = x + z+ y;

    printf("The sum is %d\n", sum);

    int average;
    average = (x + z + y) / 3;

    printf("The average is %d\n", average);

    int product;
    product = x * z * y;

    printf("The product is %d\n", product);

    if(sum > average){
        printf("%d is the largest number\n", sum, average);
    }

        if(sum < average){
        printf("%d is the smallest  number \n", sum, average);
    }

        if(average > product){
        printf("%d is the largest number \n", average, product);
    }

     if(average < product){
        printf("%d is the smallest number \n", average, product);
    }

  
}


