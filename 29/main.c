#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *filePtr;
    char fileBuff[255];
    int fileChar;

    // Open file
    filePtr = fopen("../../../../../../Desktop/file.txt", "r");

    if (filePtr)
    {
        // Read and print file content
        fgets(fileBuff, 255, filePtr);
        printf("The content of the file is : \n%s", fileBuff);

        // Move file cursor to the start of the file
        fseek(filePtr, 0, SEEK_SET);

        printf("\n\nAfter removing the spaces the content is : \n");
        do {
            // Read a character from the file
            fileChar = fgetc(filePtr);

            // Display if character is a graphic character
            if (isgraph(fileChar))
            {
                putchar(fileChar);
            }
        } while (fileChar != EOF);

        // Close the file
        fclose(filePtr);
    }
    else
    {
        printf("\nFile cannot be opened");
    }

    return 0;
}
