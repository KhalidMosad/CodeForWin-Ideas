#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

int main()
{
    FILE* ptrf ;
    char Data[DATA_SIZE];
    char Buffer[DATA_SIZE];
    ptrf = fopen("My_name.txt","w");

    fgets(Data,DATA_SIZE,stdin);
    fputs(Data, ptrf);
    fclose(ptrf);


    ptrf = fopen("My_name.txt","r");   
  // fread(Buffer,DATA_SIZE,1,ptrf);

   fgets(Buffer,DATA_SIZE,ptrf);


    printf("%s",Buffer);
 
    fclose(ptrf);

}