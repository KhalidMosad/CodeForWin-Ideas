/*
fgetc() - Used to read single character from file.
fgets() - Used to read string from file.
fscanf() - Use this to read formatted input from file.
fread() - Read block of raw bytes from file. Used to read binary files.


Step by step descriptive logic to read a file and display file contents.

Open a file using fopen() function and store its reference in a FILE pointer say fPtr.
You must open file in r(read) mode or atleast mode that support read access.

Read content from file using any of these functions fgetc(), fgets(), fscanf() or fread().
Finally, close the file using fclose(fPtr)
*/


#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

int main()
{
    /* Variable to store user content */
    char data[DATA_SIZE];
    char ch;

    /* File pointer to hold reference to our file */
    FILE * fPtr;

    fPtr = fopen("Khalid_Name.txt", "r");

    if(fPtr == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    do 
    {
        /* Read single character from file */
        ch = fgetc(fPtr);

        /* Print character read on console */
        putchar(ch);

    } while(ch != EOF); /* Repeat this if last read character is not EOF */

    fclose(fPtr);


}