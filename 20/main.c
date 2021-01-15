#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // Holds a string from the user
    char userInput[100] = "";

    // Holds a word from the string
    char word[20] = "";

    // Holds the longest word of the string
    char longestWord[20] = "";

    // Holds the shortest word of the string
    char shortestWord[20] = "";

    // Contains a character index of a word
    int wordIndex = 0;

    // Request input from the user
    printf("Input a string : ");
    fgets(userInput, sizeof(userInput), stdin);

    // Loop through each character in the string
    for (int inputIndex = 0; inputIndex < strlen(userInput); inputIndex++)
    {
        // Get a word in the string
        while (inputIndex < strlen(userInput) &&
              !isspace(userInput[inputIndex]) &&
               isalnum(userInput[inputIndex]))
        {
            // Copy the word to a different container
            word[wordIndex++] = userInput[inputIndex++];
        }

        // Check if a word was copied in the loop above.
        if (wordIndex != 0)
        {
            // A word was copied so append the null character at the end
            // of the word
            word[wordIndex] = '\0';

            // If the saved longest word is still empty
            // then copy the word found.
            if (strlen(longestWord) == 0)
            {
                strcpy(longestWord, word);
            }

            // If the saved shortest word is still empty
            // then copy the word found.
            if (strlen(shortestWord) == 0)
            {
                strcpy(shortestWord, word);
            }

            // If the current retrieved word is longer
            // than the longest word saved then copy
            // it as the longest word.
            if (strlen(word) > strlen(longestWord))
            {
                strcpy(longestWord, word);
            }

            // If the current retrieved word is shorter
            // than the shortest word saved then
            // copy it as the shortest word.
            if (strlen(word) < strlen(shortestWord))
            {
                strcpy(shortestWord, word);
            }

            // Reset the wordIndex in preparation for
            // the next word to be retrieved
            wordIndex = 0;
        }
    }

    // Print the result
    printf("Longest word : \'%s\'", longestWord);
    printf("\nShortest word : \'%s\'", shortestWord);

    return 0;
}
