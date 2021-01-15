#include<stdio.h>
#include<ctype.h>
#include <string.h>

int main()
{
    char replacementChar;
    char inputString[100];

    // Request string from the user
    printf("Input a string : ");
    fgets(inputString, sizeof(inputString), stdin);

    // Request character from the user
    printf("Input replace character : ");
    scanf("%c", &replacementChar);

    // Loop through all the characters in the input
    for (int ctr = 0; ctr < (strlen(inputString) - 1); ctr++)
    {
        // If the current character is a space
        // replace it with the given character from
        // the user.
        if (isspace(inputString[ctr]))
        {
            inputString[ctr] = replacementChar;
        }
    }

    // Print the result
    printf("Result : %s", inputString);

    return 0;
}
