#include <stdio.h>

int main(void)
{
    unsigned int counter;  //number of grades to enter
    int grade; // grade value
    int total; // sum of grades entered by use
    int average; //average of grades

    //intialization
    total = 0;      //initialize total
    counter = 1;  // initialize loop counter

    //proceessing phase

    while (counter <= 10) { //loop 10 times
        printf("%s", "Enter grade: ");  //prompt for input
        scanf("%d", &grade);   //read grade from user
        total = total + grade; //add grade to total
        counter = counter + 1;  // increment counter

    } // end while

    //termination phase
    average = total / 10;  //integer division
    printf("Class average is %d\n", average);  //display result




}