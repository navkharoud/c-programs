/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 4
Question 1
*/
#include <Stdio.h>

void printingOnes(int ones){
    switch(ones){
        case 1: printf("One");
        break;
        case 2: printf("Two");
        break;
        case 3: printf("Three");
        break;
        case 4: printf("Four");
        break;
        case 5: printf("Five");
        break;
        case 6: printf("Six");
        break;
        case 7: printf("Seven");
        break;
        case 8: printf("Eight");
        break;
        case 9: printf("Nine");
        break;
        }
}

void printTeens(int number){
    switch(number){
        case 11: printf("Eleven");
        break;
        case 12: printf("Twelve");
        break;
        case 13: printf("Thirteen");
        break;
        case 14: printf("Fourteen");
        break;
        case 15: printf("Fifteen");
        break;
        case 16: printf("Sixteen");
        break;
        case 17: printf("Seventeen");
        break;
        case 18: printf("Eighteen");
        break;
        case 19: printf("Nineteen");
        break;
        }
}

void printTies(int tens){
    switch(tens){
        case 1: printf("Ten");
        break;
        case 2: printf("Twenty");
        break;
        case 3: printf("Thirty");
        break;
        case 4: printf("Fourty");
        break;
        case 5: printf("Fivety");
        break;
        case 6: printf("Sixty");
        break;
        case 7: printf("Seventy");
        break;
        case 8: printf("Eighty");
        break;
        case 9: printf("Ninety");
        break;

        }
}

int main(void){
	printf("Enter a 2 digit number: ");
	int num, ones, tens;
    scanf("%d",&num);
	ones = num%10;
	tens = num/10;

    //if the number <10
	if(tens == 0){
        //one special case for zero
        if(ones == 0){
            printf("Zero");
        }
        else{
            printingOnes(ones);
        }
	}
	//checks if the number ends within the 11-19
    else if(num >10 && num< 20){
        printTeens(num);
	}
	//lastly prints the number if its greater than rest
	else{
        printTies(tens);
        //makes sure that the number has something in the ones place
        if(ones != 0){
            printf("-");
            printingOnes(ones);
        }


        }
        return 0;
	}




