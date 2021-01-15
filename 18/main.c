#include <stdio.h>

int main()
{
    char userInput[1000];
    char selectedChar;
    int charIndex;
    int frequencyCtr = 0;

    // Request input from the user
    printf("Input the string : ");
    fgets(userInput, sizeof userInput, stdin);

    // Request user for the character to count
    printf("Input the character to find frequency : ");
    scanf("%c", &selectedChar);

    // Loop through each character in the user input until
    // it reaches the null character at the end of the string
    for (charIndex = 0; userInput[charIndex] != '\0'; ++charIndex)
    {
        // Check each character if it matches the character
        // that the user is looking for. If it matches then
        // increment the counter for that character
        if (selectedChar == userInput[charIndex])
        {
            ++frequencyCtr;
        }
    }

    // Print the result
    printf("The character '%c' appeared %d times.", selectedChar, frequencyCtr);

    return 0;
}
