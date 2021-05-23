/**
 * C Binary Search Using Pointer
 */

#include <stdio.h>
#define MAXSIZE 100
void main()
{

    int left, right;
    int * Lptr = &left;
    int * Rptr =&right;
    int Mid;
    int arr1[MAXSIZE] ;
    int size;
    int *ptra1= arr1;
    int ToSearch;
    int * Mptr=&Mid;

    printf ("Enter size of array: ");
    scanf("%d",&size);

   *Lptr =0;
   *Rptr = size;

    printf ("Enter array1 Elements: ");
    for(int i=0; i<size; i++)
        scanf("%d",ptra1++);  

    printf ("Enter Element to search: ");
        scanf("%d",&ToSearch);     

    ptra1= arr1;

    while(*Lptr <= *Rptr)
        {
            *Mptr = (*Lptr + *Rptr)/2;
            if(*(ptra1+ *Mptr)< ToSearch)
            {
                *Lptr = *Mptr +1;
            }
            else if(*(ptra1+ *Mptr)> ToSearch)
            {
                *Rptr = *Mptr -1 ;
            }
            else if(*(ptra1+ *Mptr) == ToSearch)
            {
                printf("This is The element of Index %d", *Mptr);
                break;
            }

        }
 


}
