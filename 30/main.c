#include <stdio.h>
#include <ctype.h>

int main()
{
    char inputChar;

    // Request input from the user
    printf("Input a character : ");
    scanf("%c", &inputChar);

    // Check if the input character is a digit
    if (isdigit(inputChar))
    {
        printf("The entered character is a digit. \n\n");
    }
    else
    {
        printf("The entered character is NOT a digit. \n\n");
    }

    return 0;
}
