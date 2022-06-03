/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 2
Question 3
*/
#include <Stdio.h>
#define PI 3.14159


int main(void){
    float radius, volume;

    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);
    //calculations
    volume = (4/3)*PI*pow(radius, 3);

    printf("Volume of the sphere is %.2f cube",volume);
	return 0;
}

//
