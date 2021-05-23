/* convert to Upper case */

#include <stdio.h>
#define MAXSIZE 100
int main()
{
    char arr[MAXSIZE], freq[MAXSIZE]={0};
    printf("Enter String to convert to Upper case ");
    gets(arr);

    int i =0;

    while(arr[i] !='\0')
    {
        if(arr[i]>='a' && arr[i]<='z')
            arr[i]= arr[i]- ('a' -'A');

        i++;
    }


    printf("You Entered:   %s\n", arr);


}