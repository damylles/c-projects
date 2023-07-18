#include <stdio.h>

int main(void)
{
    printf("Enter you weight in kl: \n");
    printf("Enter your height in meters:\n");

    int weight;
    int height;

    scanf("%d%d", &weight, &height);

    int bodymass;
    bodymass = weight / (height * height);

  

    printf("Your body mass is %d\n", bodymass);

    if(bodymass < 18.5){
        printf("Underweight: %d \n", weight);
    }

    if(bodymass >= 18.5 && bodymass < 25){
        printf("Normal: %d \n", weight);
    }

    if(bodymass >= 25 && bodymass < 30 ){
        printf("Overweight: %d \n", weight);
    }

    if(bodymass >= 30){
        printf("Obese: %d  \n", weight);
    }
    

}