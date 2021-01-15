#include<stdio.h>
#include<ctype.h>

int main()
{
    // Holds the character to be validated
    char charInput;

    // Request the user to input a single character
    printf("Input a character : ");
    scanf("%c", &charInput);

    if (isupper(charInput))
    {
        printf("The entered letter is an UPPERCASE letter.");
    }
    else
    {
        printf("The entered letter is NOT an UPPERCASE letter.");
    }

    return 0;
}
