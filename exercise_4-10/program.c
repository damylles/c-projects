#include <stdio.h>

int main(void)
{
    int input;
    int sum = 0;
    int count = 0;

    do{
        scanf("%d", &input);

        if(input != 9999){
            sum += input;

            count++;
        }

    } while(input != 9999);
    printf("The average of the numbers is %f\n",(float) sum / count);

    return 0;
}