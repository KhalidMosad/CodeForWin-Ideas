/**
 * C program to Search elements of array Binary Search
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

    printf("Enter No of elements: ");
    scanf("%d", &Num1); 

    printf("Enter array elements: ");
    for(int i=0; i<Num1;i++)
        scanf("%d", &arr[i]); 

    printf("Enter element To Serach: ");
    scanf("%d", &ToSearch); 
    

    counter = Num1 /2;
    for(int i=0; i<Num1; i++)
    {
        if(arr[counter]>ToSearch)
        {
           counter = (Num1+counter)/2;
        }
        else if(arr[counter]<ToSearch)
        {
           counter = (Num1-counter)/2;
        }
        else if(arr[counter]==ToSearch)
        {
            printf("Element Found In Index: %d",counter);
            break;
        }
        else
        {
            printf("Not found");
        }
    }



}