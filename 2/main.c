#include <stdio.h>

void main()
{
    // Holds the user input with a maximum characters of 100
    char userInput[100];

    // Holds the number of character in the user input
    int stringLength = 0;

    // Ask string input from the user
    printf("Input the string :  ");
    fgets(userInput, sizeof userInput, stdin);

    // Loop through each character of the user input
    // and stop when a null character is found
    while (userInput[stringLength] != '\0')
    {
        // Increment the string length by 1 each time
        // a non-null character is found
        stringLength++;
    }

    // Print the string length
    printf("Length of the string is : %d", stringLength - 1);
}
