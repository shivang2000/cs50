#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
void prints(string str);

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        int key = atoi(argv[1]);
        printf("%i", key);
        string plain_text = get_string("what is your plain text: ");
        string ciphertext = plain_text;
        for(int i = 0 ,n = strlen(plain_text); i < n ; i++)
        {
            if (plain_text[i] >= (int)'a' && plain_text[i] <= (int)'z')
            {
                ciphertext[i] = (((((int)plain_text[i]) - 97 ) + key ) % 26 ) + 97;
            }
            else if (plain_text[i] >= (int)'A' && plain_text[i] <= (int)'Z')
            {
                ciphertext[i] = (((((int)plain_text[i]) - 65 ) + key ) % 26 ) +65;
            }
            else
            {
                ciphertext[i] = (int)plain_text[i];
            }
        }
        printf("ciphertext: ");
        prints(ciphertext);

    }
    else
    {
        return 1;
    }
}

void prints(string str)
{
    for (int i = 0 , n = strlen(str); i < n ; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}