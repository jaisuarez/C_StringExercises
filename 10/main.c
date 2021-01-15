#include <stdio.h>

// The maximum supported size of the string
#define MAXIMUM_STRING_SIZE     100

// The maximum number of characters supported
#define MAXIMUM_CHARACTER_SIZE  255

int main()
{
    char inputString[MAXIMUM_STRING_SIZE];
    int characterFrequencyCtr[MAXIMUM_CHARACTER_SIZE];
    int charIndex = 0;
    int max = 0;

    // Ask string input from the user
    printf("Input the string : ");
    fgets(inputString, sizeof inputString, stdin);

    // Initialize the frequency counter of all characters to 0
    for (charIndex = 0; charIndex < MAXIMUM_CHARACTER_SIZE; charIndex++)
    {
        characterFrequencyCtr[charIndex] = 0;
    }

    // Reinitialize character index
    charIndex = 0;

    // Loop through each character in the input string
    // Until it reaches the NULL character
    while (inputString[charIndex] != '\0')
    {
        // Get the character's ascii value
        int charAsciiValue = (int)inputString[charIndex];

        // Increment the counter for the ascii value
        characterFrequencyCtr[charAsciiValue] += 1;

        // Go to the next character in the input string
        charIndex++;
    }

    // Loop through all the characters in the character frequency counter
    for (charIndex = 0; charIndex < MAXIMUM_CHARACTER_SIZE; charIndex++)
    {
        // The ascii value must not be 32 (equivalent to the space character)
        if (charIndex != 32)
        {
            // If the value of the current character counter is
            // greater than the previous identified character counter
            // then assign it as the most frequent character
            if (characterFrequencyCtr[charIndex] > characterFrequencyCtr[max])
            {
                max = charIndex;
            }
        }
    }

    printf("The character with the highest frequency : '%c'", max);
    printf("\nNumber of times it occurred : %d", characterFrequencyCtr[max]);

    return 0;
}
