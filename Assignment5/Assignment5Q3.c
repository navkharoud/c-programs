#include <stdio.h>
    //Sehaj Mundi
    //3117464
    //Assignment 5
    //Question 3
    int main(void)
    {
        int input, remainder;
        int reverse = 0;
        printf("Enter an integer: ");
        scanf("%d", &input);
        while (input != 0) 
        {
            remainder = input % 10;
            reverse = reverse * 10 + remainder;
            input /= 10;
        }
        printf("Reversed number = %d", reverse);
        return 0;
    }