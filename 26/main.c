#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    // Holds the string from the user
    char inputString[100];

    // Holds the total punctuations found in the string
    int totalPunctuations = 0;

    // Request a string from the user
    printf("Input a string : ");
    fgets(inputString, sizeof(inputString), stdin);

    // Loop through all the characters in the string
    for (int charIndex = 0; charIndex < (strlen(inputString) - 1); charIndex++)
    {
        // If the current character is a punctuation,
        // increase the punctuation counter.
        if (ispunct(inputString[charIndex]))
        {
            totalPunctuations++;
        }
    }

    // Print result
    printf("Total punctuations : %d", totalPunctuations);

    return 0;
}
