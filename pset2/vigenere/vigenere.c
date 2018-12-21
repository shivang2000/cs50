#include <stdio.h>
#include <cs50.h>
#include <string.h>

void prints(string word);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int key;
        string keyword = argv[1];
        string plain_text = get_string("Plaintext: ");
        string ciphertext = plain_text;
        for (int i = 0, n = strlen(keyword); i < n ; i++)
        {
            if (keyword[i] >= 'A' && keyword[i] <= 'Z')
            {
                keyword[i] = (int)keyword[i] + 32;
            }
            else if (keyword[i] >= 'a' && keyword[i] <= 'z')
            {
                keyword[i] = keyword[i];
            }
        }
        for(int i = 0, j = 0 ,n = strlen(plain_text) , m = strlen(keyword); i < n ; j++ , i++)
        {
            if (plain_text[i] >= (int)'a' && plain_text[i] <= (int)'z')
            {
                if( j == m)
                {
                    j = 0;
                }
                key = (int)keyword[j] - 97;
                ciphertext[i] = (((((int)plain_text[i]) - 97 ) + key ) % 26 ) + 97;
            }
            else if (plain_text[i] >= (int)'A' && plain_text[i] <= (int)'Z')
            {
                if (j == m)
                {
                    j = 0;
                }
                key = (int)keyword[j] - 97;
                ciphertext[i] = (((((int)plain_text[i]) - 65 ) + key ) % 26 ) +65;
            }
            else
            {
                j--;
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

void prints(string word)
{
    for (int i = 0 , n = strlen(word); i < n ; i++)
    {
        printf("%c", word[i]);
    }
    printf("\n");
}