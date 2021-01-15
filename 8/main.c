#include <stdio.h>

// Define the maximum size of the string
#define MAXIMUM_STRING_SIZE 100

int main()
{
    // Holds the input string from the user
    char originalString[MAXIMUM_STRING_SIZE];

    // Holds the copied string
    char copiedString[MAXIMUM_STRING_SIZE];

    // Holds an index of a character in a string
    int charIndex = 0;

    // Ask string input from the user
    printf("Input a string : ");
    fgets(originalString, sizeof originalString, stdin);

    // Loop through each character in the input string
    // until it reaches the null character. As it loops through
    // each character, copy the character to the new string
    while (originalString[charIndex] != '\0')
    {
        copiedString[charIndex] = originalString[charIndex];

        // Go to the next character index of the string
        charIndex++;
    }

    // Append NULL at the end of the copied string
    copiedString[charIndex] = '\0';

    printf("\nThe original string is : %s", originalString);
    printf("\nThe copied string is : %s", copiedString);
    printf("\nNumber of characters copied : %d", charIndex);

    return 0;
}
