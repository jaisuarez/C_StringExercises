#include <stdio.h>
#include <string.h>

void main()
{
    // Holds the input string from the user
    char inputString[100];

    // Holds the total number of characters from the input string
    int stringLength;

    // Ask input string from the user
    printf("Input the string : ");
    fgets(inputString, sizeof inputString, stdin);

    // Get the total characters from the input string
    stringLength = strlen(inputString);

    printf("The characters of the string in reverse are :\n");

    // Print the character of the input string in reverse order
    for (int lengthCtr = stringLength - 2; lengthCtr >= 0; lengthCtr--)
    {
        printf("%c ", inputString[lengthCtr]);
    }
}
