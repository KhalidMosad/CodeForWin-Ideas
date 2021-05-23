/**
 * C program to print number pattern
 */
#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>0;i--)
    {
        for(j=i; j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}