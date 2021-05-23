/**
 * C program to check even or odd number using bitwise operator
 */
#include <stdio.h>
void main()
{
  int Num;
  int Bit_Status;
  int counter =0;
  printf("Enter any number: ");
  scanf("%d", &Num);  
  if(Num & 1)
  {
    printf("%d is odd.", Num);
  }
  else
  {
    printf("%d is even.", Num);
  }
   
  
}