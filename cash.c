#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars = get_float("Change owed: ");
   
    while (dollars<0)
    {
        dollars = get_float("Change owed: ");
    }

    int cents = round(dollars*100);
    printf("%i\n", cents);
    
    int count = 0;
    for (; cents>=25; count++)
    {
        cents=cents-25;
    }

    for(; cents>=10; count++)
    {
        cents=cents-10;
    }

    for(; cents>=5; count++)
    {
        cents=cents-5;
    }

    for(; cents>=1; count++)
    {
        cents=cents-1;
    }
    printf("%i\n", count);
}
