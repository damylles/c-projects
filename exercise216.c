#include <stdio.h>

int main(void)
{
    printf("Enter two numbers:\n");
    int x, z;
    scanf("%d%d", &x, &z);

    int sum;
    sum = x + z;

    printf("The sum is %d\n", sum);

    int product;
    product = x * z;

    printf("The product is: %d\n", product);

    int difference;
    difference = x - z;

    printf("The differnce is %d\n", difference);

    int quotient;
    quotient = x / z;

    printf("The quotient is %d\n", quotient);

    int remainder;
    remainder = x % z;

    printf("The remiander is %d\n", remainder);



}