#include <stdio.h>

void main()
{
    char inputString[50];

    // Ask a string input from the user
    printf("Input a string : ");
    fgets(inputString, sizeof inputString, stdin);

    // Print the user input string
    printf("The string you entered is : %s", inputString);
}
