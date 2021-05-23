/*
 * C program to delete an element from array at specified position
 */

#include <stdio.h>
#define MAXSIZE 100
int main()
{
    int arr[MAXSIZE], freq[MAXSIZE]={0};
    int size, i, j,Pos;

    printf("Enter No of elements: ");
    scanf("%d", &size); 

    printf("Enter array elements: ");
    for(int i=0; i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Index of element To Delete: ");
    scanf("%d", &Pos);  
    if(Pos > 0 && Pos<size)
    {
        arr[Pos] = 0;

        for(int i=Pos; i<size; i++)
        {
            arr[i] = arr[i+1];
        }

        arr[size-1]=0;
        size --;

        printf("\n New Array : \n");
        for(i=0; i<size; i++)
        {
            printf("%d \t", arr[i]);
        }
    }
    else
    {
        printf("Wrong Position.");
    }


}