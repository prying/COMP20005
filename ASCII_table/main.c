#include <stdio.h>

#define ASCII_START 32
#define ASCII_END 126
#define TABLE_ROW_LENGHT 8


int main(int argc, char** argv)
{
    
    // Loop from 32 to 126
    for (int i = ASCII_START; i < ASCII_END; i++)
    {
        if (i == ASCII_START)
            {

            }

        if ((i-ASCII_START)%TABLE_ROW_LENGHT == 0)
            printf("\n%5d | ", i);

        putchar(i);
        putchar(' ');
    }

    return 0;
}