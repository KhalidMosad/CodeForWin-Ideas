#include <stdio.h>
void main()
{
    int Num1, Num2, Num3;
    int Bit_Status;
    int counter =0;
    printf("Enter number1: ");
    scanf("%d", &Num1); 

    printf("Enter number2: ");
    scanf("%d", &Num2); 


    printf("Enter number3: ");
    scanf("%d", &Num3); 
    int max = (Num1>Num2 && Num1>Num3)?Num1:Num2>Num3? Num2:Num3 ; 

    printf("The Maximum is: %d", max);
    
}