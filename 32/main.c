#include <stdio.h>
#include <string.h>

// Check if the string contains the character indicated
static int isCharacterFound(char *inputString, char character, int stringLength);

int main()
{
    char inputString[80];
    char subString[80];
    int stringLength;
    int indexCtr;
    int subStringLength = 1;

    // Request input from the user
    printf("Input a string : ");
    scanf("%s", inputString);

    stringLength = strlen(inputString);
    subString[0] = inputString[0];

    // Loop through each character in the input string
    for (indexCtr = 1; indexCtr < stringLength; indexCtr++)
    {
        if (isCharacterFound(subString, inputString[indexCtr], subStringLength))
        {
            printf("The first repetitive character in %s is %c ", inputString, inputString[indexCtr]);
            break;
        }
        else
        {
            subString[subStringLength] = inputString[indexCtr];
            subStringLength++;
        }
    }

    // There is repetitive character if the counter for the character reached the end of the string
    if (indexCtr == stringLength)
    {
        printf("There is no repetitive character in the string string %s.", inputString);
    }

    return 0;
}

static int isCharacterFound(char *inputString, char character, int stringLength)
{
    // Loop through each character of the inputString
    for (int indexCtr = 0; indexCtr < stringLength; indexCtr++)
    {
        // If a character is found in the string, return.
        if (inputString[indexCtr] == character) return 1;
    }

    return 0;
}