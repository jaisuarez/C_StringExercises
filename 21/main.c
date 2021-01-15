#include<stdio.h>
#include<ctype.h>

int main()
{
    // Holds the input string from the user
    char inputString[100];

    // Request input from the user
    printf("Input a string : ");
    fgets(inputString, sizeof(inputString), stdin);

    // Loop through each character until it reaches the end of string.
    for (int inputIndex = 0; inputString[inputIndex]; inputIndex++)
    {
        // Convert each character to uppercase
        inputString[inputIndex] = (char)toupper(inputString[inputIndex]);
    }

    // Print the result
    printf("Result : %s", inputString);

    return 0;
}
