#include <stdio.h>

// Define the maximum size of the string
#define MAXIMUM_STRING_SIZE  100

int main()
{
    char inputString[MAXIMUM_STRING_SIZE];
    int totalSpecialChars   = 0;
    int totalLetters        = 0;
    int totalDigits         = 0;
    int charIndex           = 0;

    // Request an input string from the user
    printf("Input a string : ");
    fgets(inputString, sizeof inputString, stdin);

    // Loop through each character in the input string
    // until it reaches the null character
    while (inputString[charIndex] != '\0')
    {
        // If the current character is a letter then increase the letter counter
        if ((inputString[charIndex] >= 'a' && inputString[charIndex] <= 'z') ||
            (inputString[charIndex] >= 'A' && inputString[charIndex] <= 'Z'))
        {
            totalLetters++;
        }
        // If the current character is a digit then increase the digit counter
        else if (inputString[charIndex] >= '0' && inputString[charIndex] <= '9')
        {
            totalDigits++;
        }
        // If the current character is neither a digit nor a letter then
        // it is a special character. Increase the special character counter.
        else
        {
            totalSpecialChars++;
        }

        // Go to the next character index of the string
        charIndex++;
    }

    printf("\nNumber of Alphabets : %d", totalLetters);
    printf("\nNumber of Digits : %d", totalDigits);
    printf("\nNumber of Special Characters : %d", totalSpecialChars);

    return 0;
}
