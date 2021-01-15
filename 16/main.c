#include <stdio.h>
#include <string.h>

int main()
{
    char userInput[100];
    int strLength = 0;
    int charIndex;
    int wordCounter = 0;
    int isCharT;
    int isCharH;
    int isCharE;
    int isSpace;

    // Get string input from the user
    printf("Input a string : ");
    fgets(userInput, sizeof userInput, stdin);

    // Get the length of the input string
    strLength = (int)strlen(userInput);

    // Loop through all the characters in the string
    for (charIndex = 0; charIndex <= strLength - 3; charIndex++)
    {
        // Check if the current character is letter T
        isCharT = (userInput[charIndex] == 't' || userInput[charIndex] == 'T');

        // Check if the next character is letter H
        isCharH = (userInput[charIndex + 1] == 'h' || userInput[charIndex + 1] == 'H');

        // Check if the 2nd succeeding character is letter E
        isCharE = (userInput[charIndex + 2] == 'e' || userInput[charIndex + 2] == 'E');

        // Check if the 3rd succeeding character is a space
        isSpace = (userInput[charIndex + 3] == ' ' || userInput[charIndex + 3] == '\0');

        // If the checking of each character above is true then a
        // word 'the' is found. Increase counter.
        if ((isCharT && isCharH && isCharE && isSpace) == 1)
        {
            wordCounter++;
        }
    }

    printf("Word frequency : %d", wordCounter);

    return 0;
}
