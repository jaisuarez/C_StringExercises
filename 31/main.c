#include <stdio.h>
#include <string.h>
int main()
{
    char inputString[100];
    char words[10][10];
    int indexCtr = 0;
    int wordIndex = 0;
    int totalWords = 0;

    // Request string input from the user
    printf("Input a string : ");
    fgets(inputString, sizeof inputString, stdin);

    // Loop through each character in the string
    for (indexCtr = 0; indexCtr <= strlen(inputString); indexCtr++)
    {
        // If current character is space or null
        if (inputString[indexCtr] == ' ' || inputString[indexCtr] == '\0')
        {
            // Append the null character to the current word
            words[totalWords][wordIndex] = '\0';

            // Increment total words found
            totalWords++;

            // Reset the index to zero for the next word
            wordIndex = 0;
        }
        // Found a character of a word
        else
        {
            // Copy the character of a word
            words[totalWords][wordIndex] = inputString[indexCtr];

            // Increment the index for the word
            wordIndex++;
        }
    }

    printf("\nWords from the string are :\n");

    // Loop through all the words that were copied
    for (indexCtr = 0; indexCtr < totalWords; indexCtr++)
    {
        // Print each word
        printf("%s\n", words[indexCtr]);
    }

    return 0;
}
