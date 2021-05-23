/**
 * C program to sort elements of array in ascending order
 */
#include <stdio.h>
#define MAXSIZE 100
void main()
{

    int Temp=0;
    int arr[MAXSIZE] ;
    int Num1;

    printf("Enter No of elements: ");
    scanf("%d", &Num1); 

    printf("Enter array elements: ");
    for(int i=0; i<Num1;i++)
        scanf("%d", &arr[i]); 

    for(int i=1; i<Num1; i++)
    {
        for(int j=0; j<Num1-i; j++)
        {
            if(arr[j]>= arr[j+1])
            {
                Temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] =Temp;
            }
        }

    }

    printf("The Sorted Array in descending: ");
    for(int i=0; i<Num1;i++)
        printf("%d\n", arr[i]);


}