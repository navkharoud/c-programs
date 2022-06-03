/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 4
Question 2
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

//function for calculating the euler's number
//only loops till where the user enter the value for
float euler(int iterations){
        float e = 0.0; //initilization
        for(int i = 0; i<= iterations;i++){
        float factor = factorial(i); //gets the denominator value
        e += (1.0/factor);
        }
        return e;
}



int main(void){
    int number;
    printf("Enter the number you want to calculate for  ");
    scanf("%d", &number);
    float e = euler(number);
    printf(" %f Value for e",e);
	return 0;
}
