/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 5
Question 2

largest number for factorial

short int: 7 = 5040
int: 16 = 2004189184
long int: 19 = 109641728
double: 19 = 109641728.000000
*/

#include <Stdio.h>

//Recursive function for calculating factorial of a number
int factorial(int number){
    if(number==0){
        return 1;
    }
    else{
        return (number*factorial((number-1)));
    }
}



int main(void){
    int number;
    printf("Enter the number you want to calculate for  ");
    scanf("%d", &number);
    if(number<0){
        printf("ERROR you have entered a negative number. The program will end");
    }
    else{
        int factorialNum = factorial(number);
        printf("%d is the factorial of %d",factorialNum, number);
    }

	return 0;
}
