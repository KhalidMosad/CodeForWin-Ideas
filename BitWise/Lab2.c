#include <stdio.h>

#define BITS sizeof(char) * 8
void main()
{
    char Num ;
    char msb = 1<<(BITS-1);


    printf("Enter any number: ");
    scanf("%d", &Num);

    printf("%d \n\n", Num);

    if((Num >> (sizeof(Num)*8)-1) &1)
    printf("It is set");
    else
    printf("It is not set");

}