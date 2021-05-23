/**
 * C program to check Leap Year
 */


#include <stdio.h>
void main()
{
int Num; 
printf("Enter any Year: ");
scanf("%d", &Num);


    if(((Num % 4 == 0) && (Num % 100 != 0))|| (Num% 400 == 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
}

