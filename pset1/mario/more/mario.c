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
        for (int j = 0;j < 2*n + 2 ;j++) // for loop go sideways
        {
            if (j < n-i-1)
            {
                printf(" ");
            }
            else if(j>=n-i-1 && j < n)
            {
                printf("#");
            }
            else if(j>=n && j<n+2)
            {
                printf(" ");
            }
            else if(j>=n+2 && j<n+i+3)
            {
                printf("#");
            }
            else if(j>=n+i+3 && j<2*n+2)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
