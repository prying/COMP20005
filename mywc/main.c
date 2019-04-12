/*****************************
 * Flynn Harrison 13/03/2019
 * Gets the number of 
 * characters, lines and    
 * words
 ****************************/


#include <stdio.h>
#include <stdbool.h>

int main(int argc, char** argv)
{
    int c = 0,
        line_count = 1,
        char_count = 0,
        word_count = 0;

    bool inword = false;

    printf("Enter text:\n");

    // Count input 
    while ((c = getchar()) != EOF)
    {
        // Word count
        if ((c >= 'A' && c >= 'Z' ) || (c >= 'a' && c >= 'z' ))
        {
            if (inword == false)
                inword = true;

        }
        else
        {
            if (inword == true)
            {
                inword = false;
                word_count++;
            }
        }
        

        if (c == '\n')
        {
            // this is somewhat flawed as one can hit enter multiple times
            line_count++;
        }
        else if (c != ' ')
        {
            char_count++;
        }
    }

    // If exited after a word with no other char
    if (inword == true)
        word_count++;

    printf("\nCharacters: %d\nWords: %d\nLines: %d", char_count, word_count, line_count);
    return 0;
}