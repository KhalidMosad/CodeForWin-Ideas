/**
 * C Swap Two array using array name
 * array name is a constant pointer to the first element of the array
 */

#include <stdio.h>
#define MAXSIZE 100
void main()
{

    int First_Largest=0;
    int Second_Largest=0;
    int arr1[MAXSIZE] ;
    int arr2[MAXSIZE];
    int size;
    int *ptra1= arr1;
    int *ptra2= arr2;


    printf ("Enter size of array: ");
    scanf("%d",&size);
    printf ("Enter array1 Elements: ");
    for(int i=0; i<size; i++)
        scanf("%d", arr1+i);
    printf ("Enter array2 Elements: ");
    for(int i=0; i<size; i++)
        scanf("%d",arr2+i);    


    for(int i=0; i<size; i++)
    {
        *(arr1+i) =  *(arr1+i) ^ *(arr2+i);       
        *(arr2+i) = *(arr1+i)  ^ *(arr2+i);
        *(arr1+i) = *(arr1+i)  ^ *(arr2+i);  
    }

    printf (" array1 Elements after swaping : ");
    for(int i=0; i<size; i++)
        printf("%d \t",*(arr1+i));    


    printf (" \n array2 Elements after swaping : ");
    for(int i=0; i<size; i++)
        printf("%d \t",*(arr2+i)); 

}
