/**
 * C program to check positive negative or zero using switch case
 */ 
#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);
    switch (num>0)
    {
    case 1:
        printf("Number is Positive");
        break;
    case 0:
        switch (num<0)
        {
        case 1:
        printf("Number is Negative");
            break;
        case 0:
        printf("Number is Zero");
            break;        

        }
   

    }


}