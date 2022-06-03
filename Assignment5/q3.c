/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 5
Question 3
*/
#include <Stdio.h>

int main(void){
    int number;
    int reversed = 0;
    printf("Enter a positive number ");
    scanf("%d", &number);

    while(number != 0){
       reversed = reversed*10 + (number%10);
       number = number / 10;
    }
    printf("Reverse of the number is %d", reversed);
	return 0;
}
