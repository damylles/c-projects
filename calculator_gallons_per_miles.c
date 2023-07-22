#include <stdio.h>

int main(void)
{
    float gallons = 0, sumOfGallons = 0;
    unsigned int miles = 0, sumOfMiles = 0;
    float simpleResult = 0, totalAverage = 0;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f",&gallons );

    while (gallons != -1)
    {
        sumOfGallons += gallons;
        printf("Enter the miles driven: ");
        scanf("%u", &miles);
        sumOfMiles += miles;

        simpleResult = miles / gallons;

        printf("The miles per gallons for this tank was: %f\n\n", simpleResult);

        printf("Enter the gallons used (-1 to end): ");
        scanf("%f",&gallons );
    }

    if(sumOfGallons > 0){
        totalAverage = sumOfMiles /sumOfGallons;
        printf("The overall average miles/gallons was %f\n", totalAverage);
    }
}