#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // ask user for input that positive and less 23
    int n;
    do
    {
        n = get_int("enter a number: ");
    } while (n <= 0 || n >= 23);
    for (int i = 0; i < n; i++) // for loop go down
    {
        for (int j = 0;j < n + 1 ;j++) // for loop go sideways
        {
            if (j < n - i - 1)
            {
            printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
