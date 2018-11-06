#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int paise25 = 0 , paise10 = 0 , paise5  = 0 , paise1 = 0 ;
    float cash1 ;
    do
    {
        cash1 = get_float("enter the number of cash owned: ");
    }
    while (cash1 <0);
    cash1 = cash1 * 100;
    int cash = (int) cash1;
    do
    {
        if (cash >= 25)
        {
            printf("%i\n", cash);
            cash = cash - 25;
            printf("%i\n", cash);
            paise25++;
        }
        else if (cash >= 10)
        {
            printf("%i\n", cash);
            cash = cash - 10;
            printf("%i\n", cash);
            paise10++;
        }
        else if (cash >=5)
        {
            cash = cash - 5;
            paise5++;
        }
        else if (cash >= 1)
        {
            cash = cash - 1;
            paise1++;
        }
    }while (cash != 0);
    printf("%i\n",paise25+paise10+paise5+paise1);
}