/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 5
Question 1

*/
#include <stdio.h>

int checkVowel(char c){
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'  ){
        return 1;
    }
    else{
        return 0;
    }

}

int main(void){
    char message[1000];
    int i, vowelNum = 0;

    printf("Enter a message: ");
    scanf("%s",&message);

    for(i = 0; message[i] != '\0'; i++){
        vowelNum += checkVowel(message[i]);
    }
    printf("The message has %d vowels",vowelNum);
    return 0;
    }


