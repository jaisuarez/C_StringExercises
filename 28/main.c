#include <stdio.h>
#include <ctype.h>

int main()
{
    char inputChar;

    // Request a user to input a character
    printf("Input a character : ");
    scanf("%c", &inputChar);

    // Check if the input character is a lowercase letter
    if (islower(inputChar))
    {
        printf("The entered letter is in lowercase.");
    }
    else
    {
        printf("The entered letter is NOT in lowercase.");
    }

    return 0;
}
