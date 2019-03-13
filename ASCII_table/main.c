/*****************************
 * Flynn Harrison 13/03/2019
 * Creates a bar graph from
 * an arbitrary lenght input
 * 
 ****************************/


#include <stdio.h>

#define ASCII_START 32
#define ASCII_END 126
#define TABLE_ROW_LENGHT 8
#define TABLE_ROW_START 5


int main(int argc, char** argv)
{
    
    // Loop from 32 to 126
    for (int i = ASCII_START; i < ASCII_END; i++)
    {
        // Create top
        if (i == ASCII_START)
        {
            // Shift pointer accross
            printf("%*c", TABLE_ROW_START + 2, ' ');
            for (int i = 0; i < TABLE_ROW_LENGHT; i ++)
            {
                putchar(' ');
                putchar(i+'0');
            }

            printf("\n%*c", TABLE_ROW_START + 2, '+');
            for (int i = 0; i < TABLE_ROW_LENGHT*2; i++)
                putchar('-');
        }

        // Start every row with the inital index
        if ((i-ASCII_START)%TABLE_ROW_LENGHT == 0)
            printf("\n%*d | ", TABLE_ROW_START, i);

        putchar(i);
        putchar(' ');
    }

    return 0;
}