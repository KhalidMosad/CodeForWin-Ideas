/**
 * C program to create a file and write data into file.

Reading data from a File
There are three different functions dedicated to reading data from a file

fgetc(file_pointer): It returns the next character from the file pointed to by the file pointer. When the end of the file has been reached, 
the EOF is sent back.
fgets(buffer, n, file_pointer): 
It reads n-1 characters from the file and stores the string in a buffer in which the NULL character '\0' is appended as the last character.
fscanf(file_pointer, conversion_specifiers, variable_adresses): It is used to parse and analyze data.
 It reads characters from the file and assigns the input to a list of variable pointers variable_adresses using conversion specifiers.
  Keep in mind that as with scanf, 
fscanf stops reading a string when space or newline is encountered.



 */

#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

int main()
{
    /* Variable to store user content */
    char data[DATA_SIZE];

    /* File pointer to hold reference to our file */
    FILE * fPtr;

    fPtr = fopen("Khalid_Name.txt", "w");

    if(fPtr == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }

        printf("Enter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);


    /* Write data to file */
    fputs(data, fPtr);


    /* Close file to save file data */
    fclose(fPtr);




}