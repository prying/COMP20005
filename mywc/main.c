/*****************************
 * Flynn Harrison 13/03/2019
 * Gets the number of 
 * characters and lines,
 * then outputing the total
 ****************************/

#include <stdio.h>

int main(int argc, char** argv)
{
    int c = 0,
        line_count = 1,
        char_count = 0;

    printf("Enter text:\n");

    // Count input 
    while ((c = getchar()) != EOF)
    {
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

    printf("\nCharacters: %d\nLines: %d", char_count, line_count);
    return 0;
}