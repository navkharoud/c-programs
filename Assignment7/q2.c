/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 7
Question 2

Added functionality to for the user to enter their numbers since this program should work for any length of array
*/

#include <stdio.h>

double avg(double arr[], int length){
    double total = 0;
    int i;
    double avg;
    for(i = 0; i<length; i = i+1){
        total+=arr[i];
    }
    avg = total/length;
    return avg;
}

int main(void){
    int i;
    int length;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &length);
    double arr[length], average;

    printf("Enter %d values: \n", length);
    for(i = 0; i< length; i++){
        scanf("%lf", &arr[i]);
    }
    average = avg(arr, length);
    printf("The average is %lf ", average);
	return 0;
}
