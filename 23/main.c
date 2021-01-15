#include<stdio.h>
#include<ctype.h>

int main()
{
    // Holds the character to be validated.
    char charInput;

    // Request user for a single character
    printf("Input a character : ");
    scanf("%c", &charInput);

    // Check if the input is a valid hexadecimal character.
    // The hexadecimal characters are : a - f, A - F, 0 - 9
    if (isxdigit(charInput))
    {
        printf("The entered character is a hexadecimal digit.");
    }
    else
    {
        printf("The entered character is NOT a hexadecimal digit.");
    }

    return 0;
}
