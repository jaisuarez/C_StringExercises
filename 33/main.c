#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Determines if the substring contains the character
static int ifSubstringContainChar(char character, char *subString, int subStringLength, int *charCtr);

int main()
{
    char inputString[80];
    char subString[80];
    int inputLen;
    int index;
    int subStringLength;
    int characterCtr[80];

    // Request input string from a user
    printf("Input a string : ");
    fgets(inputString, sizeof inputString, stdin);

    // Count total number of character from input string
    inputLen = strlen(inputString);

    // Set the first character of the input string as the initial substring
    subString[0] = inputString[0];

    characterCtr[0] = 1;
    subStringLength = 0;

    // Loop through each character in the input string
    for (index = 1; index < inputLen; index++)
    {
        if (!isgraph(inputString[index])) continue;

        if (!ifSubstringContainChar(inputString[index], subString, subStringLength, characterCtr))
        {
            // Increase substring length
            subStringLength++;

            // Copy the next character to the substring
            subString[subStringLength] = inputString[index];

            // Set the counter of that character to 1
            characterCtr[subStringLength] = 1;
        }
    }

    printf("Character count of each character :\n");

    // Print the total number of characters in the string
    for (index = 0; index <= subStringLength; index++)
    {
        printf("%c\t%d\n", subString[index], characterCtr[index]);
    }

    return 0;
}

static int ifSubstringContainChar(char character, char *subString, int subStringLength, int *charCtr)
{
    int index;

    // Loop through each character in the substring
    for (index = 0; index <= subStringLength; index++)
    {
        // If a character is found in the substring,
        // increase its counter and return.
        if (subString[index] == character)
        {
            charCtr[index]++;
            return 1;
        }
    }

    // The loop reached to the end of the substring
    // and did not find the character
    if (index > subStringLength) return 0;
}

