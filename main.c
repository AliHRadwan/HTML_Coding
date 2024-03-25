#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main (void)
{
    int i, row = 10, star, space;
    
    printf("Hello World!\n");

    for (i = 1; i <= row; i++)
    {

        printf("           \n");

        for (space = row; space > i; space--)
        {
            printf(" ");
        }

        for (star = 1; star <= ((i*2)-1); star++)
        {
            printf("*");
        }
        
    }

    printf("\n");

    return 0;
}