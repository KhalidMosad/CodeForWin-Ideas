/**
 * C program to calculate product of digits of a number
 */

#include <stdio.h>
void main()
{

int Num, first_dig, Last_dig, Copy_Num, Mul=1; 
printf("Enter any Number: ");
scanf("%d", &Num);
Copy_Num =Num;

while (Copy_Num>0)
{
    Mul =Mul * (Copy_Num %10);

    Copy_Num /=10;
}


printf("\n\n%d",Mul );


}