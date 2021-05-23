#include <stdio.h>
#define LoopSize  sizeof(int)*8
void main()
{
  int Num;
  int Bit_Status;
  int counter =0;

    printf("Enter any number: ");
    scanf("%d", &Num);

    for(int i =0; i<LoopSize; i++)
    {
        Bit_Status = Num>>i & 1 ; 
        if(Bit_Status == 1)
            counter= i;
    }
  

    printf("The Highest Set Bit is :  %d", counter);


    
}