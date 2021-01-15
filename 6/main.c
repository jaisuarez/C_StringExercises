#include <stdio.h>

#define MAXIMUM_STRING_SIZE 100

void main()
{
    // Holds the first input string from the user
    char firstInputString[MAXIMUM_STRING_SIZE];

    // Holds the second input string from the user
    char secondInputString[MAXIMUM_STRING_SIZE];

    // Contains the result of the input strings
    // are equal or not
    int isStringInputEqual = 0;

    // Holds the smallest index where the end
    // of string character is found
    int charIndexCounter = 0;

    // Request the first input string from the user
    printf("Input the first string : ");
    fgets(firstInputString, sizeof firstInputString, stdin);

    // Request the second input string from the user
    printf("Input the second string : ");
    fgets(secondInputString, sizeof secondInputString, stdin);

    // Loop as long as each character in the same position
    // of the two strings are the same
    while (firstInputString[charIndexCounter] == secondInputString[charIndexCounter])
    {
        // Break loop when end of string character is found in either string
        if (firstInputString[charIndexCounter] == '\0' || secondInputString[charIndexCounter] == '\0')
        {
            break;
        }

        charIndexCounter++;
    }

    // The first input string is equal to the second input string
    if (firstInputString[charIndexCounter - 1] == '\0' && secondInputString[charIndexCounter - 1] == '\0')
    {
        isStringInputEqual = 0;
    }
    // The second input string has fewer characters
    else if (firstInputString[charIndexCounter] > secondInputString[charIndexCounter])
    {
        isStringInputEqual = 1;
    }
    // The first input string has few characters
    else if (firstInputString[charIndexCounter] < secondInputString[charIndexCounter])
    {
        isStringInputEqual = -1;
    }

    if (isStringInputEqual == 0)
    {
        printf("\nThe length of both strings are equal and \n also both strings are equal.\n");
    }
    else if (isStringInputEqual == -1)
    {
        printf("\nThe length of the first string is smaller than the second.\n");
    }
    else
    {
        printf("\nThe length of the first string is greater than the second.\n");
    }
}
