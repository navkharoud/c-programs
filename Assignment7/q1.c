/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 7
Question 1
*/
#include <stdio.h>
#include <math.h>

int computePoly(int number){
    int total = 0;
    total += 8*pow(number,4) - 4*pow(number,3) + 2*pow(number,2);
    return total;
}

int main(void){
    int input, computedValue;
    printf("Enter a value for x: ");
    scanf("%d",&input);
    computedValue = computePoly(input);
    printf("The value of the polynomial is %d ",computedValue);
    return 0;
    }


