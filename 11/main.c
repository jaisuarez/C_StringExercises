#include <stdio.h>
#include <string.h>

int main()
{
    // Holds the user's entered string
    char inputString[100];

    // Holds the total number of characters from the user's input
    int stringLength;

    // Ask user for an input string
    printf("Input a string : ");
    fgets(inputString, sizeof inputString, stdin);

    // Get the number of characters in the input string
    stringLength = strlen(inputString);

    // Decrement by 1 to exclude the newline at the end of the string
    stringLength -= 1;

    // Loop through the string with the same number of times as the input characters
    for (int outerCharIndex = 1; outerCharIndex < stringLength; outerCharIndex++)
    {
        // Each completion of this inner loop moves the character with the
        // greater ascii equivalent to the end of the string position and
        // the characters with smaller ascii equivalent closer to the start
        //
        // When the inner loop's innerCharIndex resets to 0, the maximum
        // number of loop that it is going to execute will be less than
        // one compared to its previous loop. This is because the last
        // position of the previous loop now contains the character
        // that has the largest ascii value.
        for (int innerCharIndex = 0; innerCharIndex < stringLength - outerCharIndex; innerCharIndex++)
        {
            // If the current character in the position has greater ascii
            // value than the next character then switch their places.
            if (inputString[innerCharIndex] > inputString[innerCharIndex + 1])
            {
                char charCopy = inputString[innerCharIndex];
                inputString[innerCharIndex] = inputString[innerCharIndex + 1];
                inputString[innerCharIndex + 1] = charCopy;
            }
        }
    }

    printf("Sorted in ascending order : ");
    printf("%s", inputString);

    return 0;
}
