/* Copy to strings */

#include <stdio.h>
#define MAXSIZE 100
int main()
{
    char arr[MAXSIZE], freq[MAXSIZE]={0};
    printf("Enter String to copy: ");
    gets(arr);

    int i =0;

    while(arr[i] !='\0')
    {
        freq[i]=arr[i];
        i++;
    }

    freq[i]= '\0';

    printf("First string = %s\n", arr);
    printf("Second string = %s\n", freq);
    printf("Total characters copied = %d\n", i);





}