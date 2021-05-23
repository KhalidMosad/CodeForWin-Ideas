/**
 * More Effective than Lab3.c
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
    int Left=0;
    int Right;

    printf("Enter No of elements: ");
    scanf("%d", &Num1); 

    Right =Num1;

    printf("Enter array elements: ");
    for(int i=0; i<Num1;i++)
        scanf("%d", &arr[i]); 

    printf("Enter element To Serach: ");
    scanf("%d", &ToSearch); 
    

while (Left<Right)
{
    counter= (Left+Right)/2 ;

        if(arr[counter]>ToSearch)
        {
           Left = counter+1;
        }
        else if(arr[counter]<ToSearch)
        {
           Right = counter -1 ;
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