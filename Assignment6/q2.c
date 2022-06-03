/*
Navkaran Singh
3119008
PHYS-2102-051
Assignment 6
Question 2
*/

#include <stdio.h>
#include <ctype.h>

/*we hold all the letters in a char array
the first word increases the count
if they appear in the 2nd word the count decreases
in the end if the counts are not the same i.e. 0 they are not anagrams
these can also be stored in 2 arrays and then sorted and compared but that solution takes more memory.
*/

int main( void ) {
	int letters[26] = { 0 };
	char c;

	//count the letters in the first word and increases count of the character
	//checks if its an alphabet and then changes its case if its upper
	printf("Enter the first word or phrase: " );
	while((c = getchar()) != '\n' ) {
		if(isalpha(c)) {
			letters[tolower(c)]++;
		}
	}

	//does the same for the 2nd word
	printf("Enter second word or phrase: " );
	while((c = getchar()) != '\n' ) {
		if(isalpha(c)) {
			letters[tolower(c)]--;
		}
	}

	//check if they are anagrams
	for(int i = 0; i < 26; i++) {
		if(letters[i] != 0){
			printf("Those are not anagrams.\n" );
			return 0;
		}
	}
	//if they equal they are anagrams
	printf("Those are anagrams.\n" );
    return 0;
}
