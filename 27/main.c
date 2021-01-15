#include <stdio.h>
#include <ctype.h>

int main()
{
    // Holds the index of a character in a string
    int charIndex = 0;

    // Holds a string that contains a new line
    char inputString[] = "The quick brown fox \n jumps over the \n lazy dog. \n";

    // Loop as long as a character is not a new line
    while (isprint(inputString[charIndex]))
    {
        // Print the character
        putchar(inputString[charIndex]);

        // Go to the next character index
        charIndex++;
    }

    return 0;
}
