 #include <stdio.h>
    //Sehaj Mundi
    //3117464
    //Assignment 5
    //Question 2
    int main(void)
    {
        int input, i;
        int factorial =1;
        printf("Enter a number to calculate factorial: ");
        scanf("%d",&input);
        if (input < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= input; i++) {
            factorial = i*factorial;
        }
        printf("Factorial of %d = %d", input, factorial);
    }
        return 0;
    }