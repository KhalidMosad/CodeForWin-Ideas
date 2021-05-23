/**
 * C Swap Two array
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
        scanf("%d",ptra1++);
    printf ("Enter array2 Elements: ");
    for(int i=0; i<size; i++)
        scanf("%d",ptra2++);    

    ptra1= arr1;
    ptra2= arr2;

    for(int i=0; i<size; i++)
    {
        *ptra1 = *ptra1 ^ *ptra2;
         
        *ptra2 = *ptra1 ^ *ptra2;
        *ptra1 = *ptra1 ^ *ptra2;  
         ptra1++;
         ptra2++;
    }

    ptra1= arr1;
    ptra2= arr2;

    printf (" array1 Elements after swaping : ");
    for(int i=0; i<size; i++)
        printf("%d \t",*ptra1++);    


    printf (" \n array2 Elements after swaping : ");
    for(int i=0; i<size; i++)
        printf("%d \t",*ptra2++); 

}
