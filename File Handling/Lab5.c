/**
 * C program to copy contents of one file to another.
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *sourceFile;
    FILE *destFile;
    char sourcePath[100];
    char destPath[100];

    char ch;

    sourceFile  = fopen("Khalid_Name.txt", "r");
    destFile    = fopen("Khalid_Name1.txt",   "w");

    /* fopen() return NULL if unable to open file in given mode. */
    if (sourceFile == NULL || destFile == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");

        exit(EXIT_FAILURE);
    }


    /*
     * Copy file contents character by character.
     */
    ch = fgetc(sourceFile);
    while (ch != EOF)
    {
        /* Write to destination file */
        fputc(ch, destFile);

        /* Read next character from source file */
        ch = fgetc(sourceFile);
    }


    printf("\nFiles copied successfully.\n");


    /* Finally close files to release resources */
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}