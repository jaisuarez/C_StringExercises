#include <stdio.h>
#include <string.h>

int main()
{
    // Holds the first string input from the user
    char firstString[100];

    // Holds the second string input from the user
    char secondString[100];

    // Holds the length of the first string
    int lenOfFirstStr;

    // Holds the length of the second string
    int lenOfSecStr;

    // Ask string input from user
    printf("Input the first string : ");
    fgets(firstString, sizeof(firstString), stdin);
    printf("Input the second string : ");
    fgets(secondString, sizeof(secondString), stdin);

    // Get length of the first and second string
    lenOfFirstStr = (int)strlen(firstString);
    lenOfSecStr = (int)strlen(secondString);

    // Append a space after the last input of the first string
    firstString[lenOfFirstStr - 1] = ' ';

    // Loop until each character from the second string
    // is copied to the first string
    for (int charIndex = 0; charIndex < (lenOfSecStr - 1); charIndex++)
    {
        // Append a character from the second string to the first string
        firstString[lenOfFirstStr] = secondString[charIndex];

        // Go to the next position in the first string
        lenOfFirstStr++;
    }

    printf("Concatenated String : %s", firstString);

    return 0;
}
