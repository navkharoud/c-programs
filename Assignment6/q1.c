/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 6
Question 1
*/

#include <stdio.h>

int main( void ) {
	char message[100];
	int key;
	int i = 0;
	int j;

	printf("Enter the key (1-25): ");
	scanf("%d",&key);
	while( getchar() != '\n' )
		;    // ignore trailing characters from above scanf
    printf("Enter the message: ");

    //do while since we need atleast one character in the message and then put the logic on it
	do {
        scanf("%c",&message[i]);
        //lowercase checker
		if(message[i] >='a' && message[i]<='z'){
			message[i] = ((message[i]-'a')+key)%26+'a';
		}
		//uppercase checker
		else if(message[i]>='A' && message[i]<='Z'){
			message[i] = ((message[i]-'A')+key)%26+'A';
		}
		i++;
		//while condition checks for the message size and the trailing character /n
	} while(i<100 && message[i-1] != '\n');


    //prints the message
	printf("Processed message: " );
	for(j = 0; j<i;j++) {
		printf( "%c", message[j]);
	}
	return 0;
}
