/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 3
Question 2
*/
#include <Stdio.h>

int main(void){
    int year1,month1,day1;
    int year2,month2,day2;


    printf("Enter the first date (yyyy-mm-dd):");
    scanf("%d- %d- %d", &year1,&month1,&day1);
    //printf("%d-%d-%d", year1, month1, day1);

    printf("Enter the second date (yyyy-mm-dd):");
    scanf("%d- %d- %d", &year2,&month2,&day2);

    //get a computed value of all three combines and compare.
    //the multiplication is to ensure proper places for the months and days
    //since some months and days can be same
    int total1 = year1*1000+month1*100+day1*10;
    int total2 = year2*1000+month2*100+day2*10;


    if(total1<total2){
        printf("The date %d - %d - %d is later than %d-%d-%d", year2,month2,day2,year1,month1,day1);
    }
    else if(total1>total2){
        printf("The date %d-%d-%d is later than %d-%d-%d", year1,month1,day1,year2,month2,day2);

    }
    else{
        printf("Those are the same dates.");
    }

    //another method is to have multiple nested if-else blocks
    //checkDates(year1,month1,day1,year2,month2,day2);
	return 0;
}

//This method compares the dates using if else statements
void checkDates(year1,month1,day1,year2,month2,day2){
    if (year1==year2){
        if(month1==month2){
            if(day1==day2){
                 printf("Those are the same dates.");
            }
            else if(day1>day2){
                 printf("The date %d-%d-%d is later than %d-%d-%d", year1,month1,day1,year2,month2,day2);
            }
            else if(day1<day2){
                 printf("The date %d - %d - %d is later than %d-%d-%d", year2,month2,day2,year1,month1,day1);
            }
        }
        else if(month1>month2){
             printf("The date %d-%d-%d is later than %d-%d-%d", year1,month1,day1,year2,month2,day2);
        }
        else if(month2>month1){
            printf("The date %d - %d - %d is later than %d-%d-%d", year2,month2,day2,year1,month1,day1);
        }
    }
    else if (year1>year2){
         printf("The date %d-%d-%d is later than %d-%d-%d", year1,month1,day1,year2,month2,day2);
    }
    else if(year2>year1){
        printf("The date %d - %d - %d is later than %d-%d-%d", year2,month2,day2,year1,month1,day1);
    }

}
