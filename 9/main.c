#include <stdio.h>
#include <string.h>

// Define the maximum size of the string
#define MAXIMUM_STRING_SIZE 100

int main()
{
    // Holds the input string from the user
    char inputString[MAXIMUM_STRING_SIZE];

    // Holds the index of a character in a string
    int charIndex;

    // Holds to the string length of the input string
    int stringLength;

    // Holds the total vowels in the input string
    int vowelCounter = 0;

    // Holds the total consonants in the input string
    int consonantCounter = 0;

    // Ask string input from the user
    printf("Input the string : ");
    fgets(inputString, sizeof inputString, stdin);

    // Get the length of the input string
    stringLength = strlen(inputString);

    // Loop through all the characters in the input string
    for (charIndex = 0; charIndex < stringLength; charIndex++)
    {
        // Increment the vowel counter if any of the letters are detected :
        // 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'
        if ((inputString[charIndex] == 'a') || (inputString[charIndex] == 'e') ||
            (inputString[charIndex] == 'i') || (inputString[charIndex] == 'o') ||
            (inputString[charIndex] == 'u') || (inputString[charIndex] == 'A') ||
            (inputString[charIndex] == 'E') || (inputString[charIndex] == 'I') ||
            (inputString[charIndex] == 'O') || (inputString[charIndex] == 'U'))
        {
            vowelCounter++;
        }
        // Increment the consonant counter if a letter is found and it does not fit
        // the above condition.
        else if ((inputString[charIndex] >= 'a' && inputString[charIndex] <= 'z') ||
                 (inputString[charIndex] >= 'A' && inputString[charIndex] <= 'Z'))
        {
            consonantCounter++;
        }
    }

    printf("\nThe total number of vowels : %d", vowelCounter);
    printf("\nThe total number of consonants : %d", consonantCounter);

    return 0;
}
