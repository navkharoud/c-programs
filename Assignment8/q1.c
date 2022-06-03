/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 8
Question 1
*/

#include <stdio.h>

double innerProd(double arr1[],double arr2[], int length){
    double total = 0;
    int i;
    double product;
    for(i = 0; i<length; i = i+1){
        product = arr1[i]*arr2[i];
        total+= product;
    }
    return total;
}

int main(void){
    int i;
    int length;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &length);
    double arr1[length];
    double arr2[length];
    double prod;

    printf("Enter %d values for 1st array: \n", length);
    for(i = 0; i< length; i++){
        scanf("%lf", &arr1[i]);
    }
    printf("Enter %d values for 2nd array: \n", length);
    for(i = 0; i< length; i++){
        scanf("%lf", &arr2[i]);
    }
    prod = innerProd(arr1, arr2, length);
    printf("The inner product is is %lf ", prod);
	return 0;
}
