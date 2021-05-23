#include <stdio.h>
#define MAXSIZE 100
int main()
{
    char arr[MAXSIZE];
    int size, i, j,Pos;

    printf("Enter No of elements: ");
    scanf("%d", &size); 
    printf("Enter array elements: ");
    for(int i=0; i<size;i++)
    {
        scanf("%d", &arr[i]);
    }   
    printf("You entered: ");
    for(int i=0; i<size;i++)
    {
        printf("%d  \t", arr[i]);
    }  




}