/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 8
Question 2
*/

#include <stdio.h>

double countPositive(double arr1[], int length){
    double total = 0;
    int i;
    int positives =0;
    for(i = 0; i<length; i = i+1){
        if(arr1[i]>=0){
                positives++;
        }
    }
    return positives;
}

int main(void){
    int i;
    int length;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &length);
    double arr[length];
    int positives;

    printf("Enter %d values for 1st array: \n", length);
    for(i = 0; i< length; i++){
        scanf("%lf", &arr[i]);
    }

    positives = countPositive(arr,length);
    printf("The number of positive elements in the array is %d ", positives);
	return 0;
}
