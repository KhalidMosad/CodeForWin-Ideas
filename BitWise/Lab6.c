#include <stdio.h>
void main()
{
  int Num;
  int Bit;

    printf("Enter any number: ");
    scanf("%d", &Num);

     printf("Enter number Of Bit to Clear: ");
    scanf("%d", &Bit);  
    Num = Num ^(1<<Bit) ;
    printf("The New Value of The Number:  %d", Num);


    
}