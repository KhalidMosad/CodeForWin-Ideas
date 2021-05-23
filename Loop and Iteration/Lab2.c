/**
 * C program to find sum of its digits of a number
 */

#include <stdio.h>
void main()
{

int Num, first_dig, Last_dig, Copy_Num, Sum=0; 
printf("Enter any Number: ");
scanf("%d", &Num);
Copy_Num =Num;

while (Copy_Num>0)
{
    Sum =Sum + Copy_Num %10;

    Copy_Num /=10;
}


printf("\n\n%d",Sum );


}