/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 2
Question 1
*/
#include <Stdio.h>

int main(void){
	printf("Enter a fraction: ");
	float numerator, denominator;
	scanf("%f / %f",&numerator,&denominator);
	float result = (numerator/denominator)*100;
	printf("As a percentage: %.2f%%", result);
	return 0;
}
