/**
 * C program to find second largest number in an array
 */

#include <stdio.h>
#define MAXSIZE 100
void main()
{

    int First_Largest=0;
    int Second_Largest=0;
    int arr[MAXSIZE] ;
    int Num1;

    printf("Enter No of elements: ");
    scanf("%d", &Num1); 

    printf("Enter array elements: ");
    for(int i=0; i<Num1;i++)
        scanf("%d", &arr[i]); 

//First_Largest = arr[0];
    for(int i=0; i<Num1;i++)
        {
            if(arr[i]>First_Largest)
            {
                Second_Largest = First_Largest;
                First_Largest =arr[i];
            }
            else if(arr[i]>Second_Largest)
            {
                Second_Largest =arr[i];
            }
            
        }


        printf("The First Largest: %d\n",First_Largest);
        printf("The Second Largest: %d",Second_Largest);
}