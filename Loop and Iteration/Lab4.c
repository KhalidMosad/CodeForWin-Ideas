/**
 * C program to find reverse of a number
 */


#include <stdio.h>
void main()
{

int Num, Copy_Num, Reverse =0; 
printf("Enter any Number: ");
scanf("%d", &Num);
Copy_Num =Num;

while (Copy_Num>0)
{
    Reverse= Reverse*10 + (Copy_Num %10);

    Copy_Num /=10;
}


printf("\n\n%d",Reverse );


}