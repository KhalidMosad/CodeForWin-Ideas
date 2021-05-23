#include <stdio.h>
void main()
{
  int Num;

    printf("Enter any number: ");
    scanf("%d", &Num);

  
    if(Num & 1 == 1)
        printf("It is set");
    else
         printf("It is not set");
}