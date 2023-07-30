#include <stdio.h>

//body mass calc.

int main(void) {
    printf("Enter your weight in kg: \n");
    printf("Enter your height in meters:\n");

    float weight;
    float height;

    scanf("%f%f", &weight, &height);

    float bodymass;
    bodymass = weight / (height * height);

    printf("Your body mass is %.2f\n", bodymass);

    if (bodymass < 18.5) {
        printf("Underweight: %.2f kg\n", weight);
    }

    if (bodymass >= 18.5 && bodymass < 25) {
        printf("Normal weight: %.2f kg\n", weight);
    }

    if (bodymass >= 25 && bodymass < 30) {
        printf("Overweight: %.2f kg\n", weight);
    }

    if (bodymass >= 30) {
        printf("Obese: %.2f kg\n", weight);
    }

    return 0;
}