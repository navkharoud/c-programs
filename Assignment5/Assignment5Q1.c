 #include <stdio.h>

int checkVowel(char c){
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'  ){
        return 1;
    }
    else{
        return 0;
    }

}

    int main(void)
    {
        char message[100];
        printf("Enter a message: ");
        scanf("%s",&message);
        int i, vowelCount = 0;
        for(i = 0; message[i] != '\0'; i++)
        {
            vowelCount += checkVowel(message[i]);
        }
        printf("Number of vowels = %d\n",vowelCount);
        return 0;
    }
