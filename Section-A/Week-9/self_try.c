#include<stdio.h>
#include<string.h>

int main()
{
    char text[] =  "Rhyme and Rhythm: Rhyme typically involves words that end with the same sound, creating a musical quality. Rhythm, often described as the heartbeat of the poem, is the pattern of sounds created by how words are placed together.";

    int width = 180;
    int window = 90;
    int leftpadding = (width-window)/2;

    int len = strlen(text);

    for (int i = 0; i < 5; i++)
    printf("\n");

    for (int i = 0; i < len; i++)
    {
        printf("\r");

        for (int i = 0; i < leftpadding; i++)
        {
            printf(" ");
        }

        for (int j = 0; j < window; j++)
        {
            if (i+j < len)
            {
                printf("%c", text[j+i]);
            }
            else{
                printf(" ");
            }
        }

        for (int k = 0; k < 10000000; k++);

    }

}