/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 3
Question 1
*/
#include <Stdio.h>

int main(void){
	printf("Enter an integer: ");
	int num;
	scanf("%d",&num);
	//could also use Least significant bit too
	// num & 1
	// 1 = odd
	// 0 = even
    if(num%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
	return 0;
}
