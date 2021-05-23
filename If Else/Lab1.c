/**
 * C program to check divisibility of any number
 */


#include <stdio.h>
void main()
{
int Num; 
printf("Enter any number: ");
scanf("%d", &Num);


    if((Num % 5 == 0) && (Num % 11 == 0))
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }
}

