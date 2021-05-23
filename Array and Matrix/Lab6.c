/**
 * C program to sort even and odd elements of an array separately
 */

#include <stdio.h>
#define MAXSIZE 100
void main()
{

    int Temp=0;
    int arr[MAXSIZE] ;
    int Num1;
    int ToSearch;
    int counter;
    int OddCounter=0;
    int EvenCounter=0;

    printf("Enter No of elements: ");
    scanf("%d", &Num1); 
    static int c;
    printf("Enter array elements: ");
    for(int i=0; i<Num1;i++)
       {
            scanf("%d", &arr[i]); 
            if(arr[i]&1)
                OddCounter++;
            else
                EvenCounter++;
       } 

    if(EvenCounter>= OddCounter)
        counter = EvenCounter;
    else
        counter = OddCounter ;   
    for(int i=0; i<counter; i++)
    {
          
        if(arr[i]&1)
        {
            for(int j=counter; j<Num1;j++)
            {
                if(!(arr[j]&1))
                {
                    int temp;
                    temp = arr[i];
                    arr[i]= arr[j];
                    arr[j]= temp;
                    break;
                }
            }
        }



    }

    for(int i=0; i<Num1;i++)
        printf("%d", arr[i]); 

}