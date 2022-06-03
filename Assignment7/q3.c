/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 7
Question 3

*/
#include <stdio.h>

int num_digits(long n){
    int numOfDigits;
    do{
        n /= 10;
        numOfDigits++;
    }
    while(n>0);
    return numOfDigits;
}

int main(void){
    long number;
    int numOfDigits;
    printf("Enter a long number: ");
    scanf("%ld", &number);
    numOfDigits = num_digits(number);
    printf("The number has %d digits.", numOfDigits);
    return 0;
}
