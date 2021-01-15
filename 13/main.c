#include <stdio.h>

int main()
{
    // Holds the entered string from the user
    char inputString[100];

    // Holds the substring of the entered string
    char subString[100];

    // Holds the position where copying of the substring begins
    int startPosition = 0;

    // Holds the total length of the substring that is to be copied
    int lengthOfExtractedString = 0;

    // Counts the number of characters that is copied as a substring
    int subStringCtr = 0;

    // Request user to enter a string
    printf("Input the string : ");
    fgets(inputString, sizeof inputString, stdin);

    printf("Input the position to start extraction : ");
    scanf("%d", &startPosition);

    printf("Input the length of the substring :  ");
    scanf("%d", &lengthOfExtractedString);

    // Loop until the total number of substring is copied to the new variable
    while (subStringCtr < lengthOfExtractedString)
    {
        // Copy the substring letter by letter to a new variable
        subString[subStringCtr] = inputString[startPosition + subStringCtr - 1];

        // Increment the counter of the copied characters
        subStringCtr++;
    }

    // Append the null character to the end of the substring
    subString[subStringCtr] = '\0';

    // Print the output
    printf("The substring retrieved from the string : \"%s\"", subString);

    return 0;
}
