#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float euros;
    do
    {
        euros = get_float("Change?");
    }
    while (euros < 0.01);
    
    int cents = round(euros*100);
    int coins = 0;
    while (cents >= 50)
    {
        cents -= 50;
        coins++;
    }

    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }

    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }

    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    while (cents >=1)
    {
        cents -= 1;
        coins++;
    }
    
    printf("%i\n", coins);
}
