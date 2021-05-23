#include <stdio.h>
void main()
{
  int Num;
  int Bit;

    printf("Enter any number: ");
    scanf("%d", &Num);

     printf("Enter number Of Bit: ");
    scanf("%d", &Bit);  

    printf("The Bit Value is:  %d", Num>>Bit &1 ); 


    
}