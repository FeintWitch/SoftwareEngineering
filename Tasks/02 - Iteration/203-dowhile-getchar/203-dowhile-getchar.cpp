#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;

    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
            //Task 2 - Pressed and sent the letter 'a' in the terminal, responded by saying "you typed a"
        printf("You also pressed return (ASCII %d)\n", returnKey);    
            //The extra line responded with You also pressed return (ASCII 10) 
            //What is the ascii code for the return code? : The accii code for return is const[36]
           
    } while ((userEnteredCharacter != 'q') && (userEnteredCharacter != 'Q'));       //Repeat if condition is met - note the != operator
        // I added '&&' which is a AND. I reused the veriable 'UserEnteredCharacter' and operator to Q
                //Could've done  'existCondition = (userEntered Character == 'q') || (userEnteredCharacter == 'Q');
    puts("Finished");
}
