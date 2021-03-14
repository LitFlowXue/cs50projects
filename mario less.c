#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Height: ");

    while (n<1 || n>8)
    {
        n = get_int("Height: ");
    }

    for (int i=0; i<n; i++)
    {
        for (int b=n-1; b>i; b--)
        {
            printf(" ");
        }

        for (int a=0; a<i+1; a++) 
        {
            printf("#");
        }
        printf("\n");
    }

}