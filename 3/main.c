#include <stdio.h>

void main()
{
    // Holds the user input with a maximum characters of 100
    char userInput[100];

    // Holds the number of character in the user input
    int characterIndex = 0;

    // Ask string input from the user
    printf("Input the string : ");
    fgets(userInput, sizeof userInput, stdin);

    printf("The characters of the string are : \n");

    // Loop through each character of the user input
    // and stop when a null character is found
    while (userInput[characterIndex] != '\0')
    {
        // Print each character
        printf("%c ", userInput[characterIndex]);
        characterIndex++;
    }
}
