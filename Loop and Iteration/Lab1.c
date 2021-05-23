/**
 * C program to swap first and last digit of a number
 */


#include <stdio.h>
void main()
{

int Num, first_dig, Last_dig, Copy_Num, counter=0, Pow =1, NewNum; 
printf("Enter any Number: ");
scanf("%d", &Num);
Copy_Num =Num;
first_dig = Copy_Num%10;

while (Copy_Num>10)
{
    Copy_Num /=10;
    counter++;
}

Last_dig = Copy_Num;

printf("%d,%d,%d", first_dig,Last_dig,counter);

for(int i=1; i<=counter; i++)
{
    Pow = Pow * 10;
}

NewNum = first_dig*Pow + (Num -Last_dig*Pow-first_dig)+ Last_dig;

printf("\n\n%d",NewNum );


}