#include <stdio.h>
#define LoopSize  sizeof(int)*8
void main()
{
  int Num;
  int Bit_Status;
  int counter =0;
  int bin[LoopSize];
    printf("Enter any number: ");
    scanf("%d", &Num);

    for(int i =0; i<LoopSize; i++)
    {
        Bit_Status = Num>>i & 1 ; 
        bin[i] = Bit_Status;
    }   
    for(int i = LoopSize-1; i>=0; i--)
    {
        printf("%d", bin[i]);
    } 

}