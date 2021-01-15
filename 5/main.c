#include <stdio.h>

// Maximum size of the string
#define MAXIMUM_STRING_SIZE 100

void main()
{
    char inputString[MAXIMUM_STRING_SIZE];
    int charCounter = 0;
    int wordCounter = 1;

    // Request user for a string input
    printf("Input the string : ");
    fgets(inputString, sizeof inputString, stdin);

    // Loop until it reaches the end of string
    while (inputString[charCounter] != '\0')
    {
        // If the current character is a space or a new line or a tab then
        // a word is found
        if ((inputString[charCounter] == ' ') ||
            (inputString[charCounter] == '\n') ||
            (inputString[charCounter] == '\t'))
        {
            // Increment the word counter
            wordCounter++;
        }

        // Increment character counter to go to the next character in the input
        charCounter++;
    }

    // Print the total result
    printf("Total number of words in the string is : %d", wordCounter - 1);
}
