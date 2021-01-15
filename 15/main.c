#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char userInput[100];
    int charIndex;
    int strLength;

    // Ask input from the user
    printf("Input a string : ");
    fgets(userInput, sizeof userInput, stdin);

    // Get the length of the input string
    strLength = (int)strlen(userInput);

    // Loop through each character in the string
    for (charIndex = 0; charIndex < strLength; charIndex++)
    {
        // If the character is a lowercase character the convert it
        // to an uppercase character
        if (islower(userInput[charIndex]))
        {
            userInput[charIndex] = (char)toupper(userInput[charIndex]);
        }
        // The character is an uppercase character so convert it
        // to a lowercase character.
        else
        {
            userInput[charIndex] = (char)tolower(userInput[charIndex]);
        }
    }

    printf("Result : %s", userInput);

    return 0;
}
