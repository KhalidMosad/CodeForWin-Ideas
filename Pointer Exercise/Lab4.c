/**
 * C Sort Ascending and decending using Function and pointers
 */

#include <stdio.h>
#define MAXSIZE 100


    void Ascending(int * arr,int size) ;
    void Decending(int * arr,int size) ; 
void main()
{

    int arr1[MAXSIZE] ;
    int size;
    int *ptra1= arr1;

    printf ("Enter size of array: ");
    scanf("%d",&size);

    printf ("Enter array1 Elements: ");
    for(int i=0; i<size; i++)
        scanf("%d",ptra1++);  

    Ascending(arr1, size) ;
    Decending(arr1, size) ;    


}
void Ascending(int * arr,int size) 
    {   
        int * ptra = arr;
        int i,j;
        for(i=0; i<size;i++)
        {
            for(j=1+i;j<size; j++)
            {
                if(*(ptra+i)> *(ptra+j))
                {
                    int temp;
                    temp = *(ptra+i);
                    *(ptra+i)=*(ptra+j);
                    *(ptra+j) = temp;
                }

            }
        }
        printf("The sorted ascending array is: ");
        for(int i=0; i<size; i++)
            printf("%d \t",*ptra++); 
        printf("\n");
    }
void Decending(int * arr,int size) 
    {   
        int * ptra = arr;
        int i,j;
        for(i=0; i<size;i++)
        {
            for(j=1+i;j<size; j++)
            {
                if(*(ptra+i)<*(ptra+j))
                {
                    int temp;
                    temp = *(ptra+i);
                    *(ptra+i)=*(ptra+j);
                    *(ptra+j) = temp;
                }

            }
        }
        printf("The sorted Decending array is: ");
        for(int i=0; i<size; i++)
            printf("%d \t",*ptra++); 
        printf("\n");
    }