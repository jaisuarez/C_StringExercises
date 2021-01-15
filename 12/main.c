#include <stdio.h>
#include <string.h>

int main()
{
    // Holds the input strings from the user.
    // Maximum of 25 strings with each string containing a maximum
    // of 50 characters
    char inputStrArr[25][50];

    // Temporarily holds the string to be repositioned in the array
    char stringBuffer[25];

    // The number of string to be entered by the user
    int numOfStrInput;

    // Ask user for the number of strings to be entered
    printf("Number of strings : ");
    scanf("%d", &numOfStrInput);

    // Read the trailing newline from the input to remove
    // it from the buffer
    getchar();

    // Loop until the indicated number of strings are entered
    // by the user
    for (int inputCounter = 0; inputCounter < numOfStrInput; inputCounter++)
    {
        // Ask the user to enter a string
        printf("Input string %d : ", inputCounter + 1);

        // Read the entered string by the user
        fgets(inputStrArr[inputCounter], sizeof(inputStrArr[inputCounter]), stdin);

        // Remove the new line appended at the end of the input
        strtok(inputStrArr[inputCounter], "\n");
    }

    // Sort the entered strings from the user in ascending order based
    // on the first character of the input.
    for (int inputCtr = 1; inputCtr <= numOfStrInput; inputCtr++)
    {
        // Each completion of this inner loop moves the string with the
        // greater value to the end of the input array and
        // the strings with smaller values closer to the beginning.
        //
        // When the inner loop's compCtr resets to 0, the maximum
        // number of the loop that is going to execute will be less than
        // one compared to its number. This is because the last position
        // of the previous loop now contains the string
        // that has the largest value.
        for (int compCtr = 0; compCtr <= numOfStrInput - inputCtr; compCtr++)
        {
            // If the current string in the string array has greater value
            // than the next string then switch their places.
            if (strcmp(inputStrArr[compCtr], inputStrArr[compCtr + 1]) > 0)
            {
                strcpy(stringBuffer, inputStrArr[compCtr]);
                strcpy(inputStrArr[compCtr], inputStrArr[compCtr + 1]);
                strcpy(inputStrArr[compCtr + 1], stringBuffer);
            }
        }
    }

    printf("\nThe strings appears after sorting : ");

    // Display string arrays in their new positions.
    // The strings with larger value is found near the bottom
    for (int stringIndex = 0; stringIndex <= numOfStrInput; stringIndex++)
    {
        printf("%s\n", inputStrArr[stringIndex]);
    }

    return 0;
}
