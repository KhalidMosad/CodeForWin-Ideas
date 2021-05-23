/**
 * C program to count frequency of each element of array
 */

#include <stdio.h>
#define MAXSIZE 100
int main()
{
    int arr[MAXSIZE], freq[MAXSIZE]={0};
    int size, i, j, count=1;

    printf("Enter No of elements: ");
    scanf("%d", &size); 

    printf("Enter array elements: ");
    for(int i=0; i<size;i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
 

    for(int i=0; i<size; i++)
    {
        count =1;
        for(int j=i+1; j<size;j++)
        {
            if(arr[i]== arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

}