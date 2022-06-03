/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 2
Question 3
*/
#include <Stdio.h>

int main(void){
    float x;

    printf("Enter value of x: ");
    scanf("%f", &x);

    //float polynomial = 16*pow(x,4)+8*pow(x,3)+4*pow(x,2)+2*x+1; polynomial value for debugging
    float calulatedVals = (((16*x+8)*x+4)*x+2)*x+1;

    printf("Value of the polynomial is %.2f",calulatedVals );
	return 0;
}
