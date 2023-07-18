#include <stdio.h>

int main(void)
{
    printf("Enter an integer:\n");

    int x;

    scanf("%d", &x);

    if(x % 2 == 0){
        printf("%d is even", x);
    }

    if (x % 2 != 0){
        printf("%d is odd", x);
    }


}