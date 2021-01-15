#include <stdio.h>

int main()
{
    char inputString[255];
    int index = 0;

    // Request user for input string
    printf("Input a string : ");
    fgets(inputString, sizeof inputString, stdin);

    // Go through each character in the string
    while (inputString[index] != '\0')
    {
        // Determine if the current character is a vowel in lowercase.
        // If it is then convert it to upper case
        if (inputString[index] == 'a' || inputString[index] == 'e' ||
            inputString[index] == 'i' || inputString[index] == 'o' ||
            inputString[index] == 'u')
        {
            // Deduct the vowel's ascii value to get its uppercase character
            inputString[index] = inputString[index] - 32;
        }

        // Go to the next character in the string
        index++;
    }

    // Print the result
    printf("\nOutput :\n");
    puts(inputString);

    return 0;
}
