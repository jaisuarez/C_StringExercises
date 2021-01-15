#include <stdio.h>

int main()
{
    char userInput[150];
    int charIndex;
    int subIndex;

    // Get string input from the user
    printf("Input the string : ");
    fgets(userInput, sizeof userInput, stdin);

    // Loop through each character until the null character is found
    for (charIndex = 0; userInput[charIndex] != '\0'; ++charIndex)
    {
        // Check if the character in the string is not a letter
        while (!((userInput[charIndex] >= 'a' && userInput[charIndex] <= 'z') ||
                 (userInput[charIndex] >= 'A' && userInput[charIndex] <= 'Z') ||
                  userInput[charIndex] == '\0'))
        {
            // A non-letter character is found. Remove that non-letter
            // by shifting the succeeding characters to its position.
            for (subIndex = charIndex; userInput[subIndex] != '\0'; ++subIndex)
            {
                userInput[subIndex] = userInput[subIndex + 1];
            }

            // Append a null character to end the string
            userInput[subIndex] = '\0';
        }
    }

    printf("Result : %s", userInput);

    return 0;
}
