#include <stdio.h>

int main()
{
    // Holds the user's entered string
    char inputString[80];

    // Holds the substring that the user wants to search
    char subString[20];

    // Holds the number of characters from the user's string input
    int inputStrLen = 0;

    // Holds the number of characters from the user's substring input
    int subStrLen = 0;

    // Is a flag that determines if the substring exists within the string
    int isStringExisting;

    // Ask the user to enter a string
    printf("Input the string : ");
    fgets(inputString, sizeof inputString, stdin);

    printf("Input the substring to be search : ");
    fgets(subString, sizeof subString, stdin);

    // Get the length of the input string
    while (inputString[inputStrLen] != '\0')
    {
        inputStrLen++;
    }
    inputStrLen--;

    // Get the length of the substring
    while (subString[subStrLen] != '\0')
    {
        subStrLen++;
    }
    subStrLen--;

    for (int inputStrCtr = 0; inputStrCtr <= (inputStrLen - subStrLen); inputStrCtr++)
    {
        // This loop will compare the user-entered substring against the computer-defined
        // substring. The computer defined-substring begins at the current position of
        // inputStrCtr until (inputStrCtr + subStrLen) position.
        for (int subStringCtr = inputStrCtr; subStringCtr < inputStrCtr + subStrLen; subStringCtr++)
        {
            // Assume that the substring exists in the input string
            isStringExisting = 1;

            // Compare the user-entered substring against the computer-defined substring
            // character by character. If a character is not equal then exit this loop
            // get the next computer-defined substring to be compared to.
            if (inputString[subStringCtr] != subString[subStringCtr - inputStrCtr])
            {
                isStringExisting = 0;
                break;
            }
        }

        // If the substring is found in the search above then exit the loop
        if (isStringExisting == 1)
        {
            break;
        }
    }

    if (isStringExisting == 1)
    {
        printf("The substring exists in the string. ");
    }
    else
    {
        printf("The substring does NOT exist in the string. ");
    }

    return 0;
}
