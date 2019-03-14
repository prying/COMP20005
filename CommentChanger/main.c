/*****************************
 * Flynn Harrison 13/03/2019
 * Gets the number of 
 * characters and lines,
 * then outputing the total
 ****************************/


#include <stdio.h>
#include <stdbool.h>

int main(int argc, char** argv)
{
    int c = 0;
    bool in_comment = false;
    while((c=getchar()) != EOF)
    {
        // Check if in comment
        if (c == '/')
        {
            c = getchar();
            if (c == '/')
            {
                in_comment = true;
                putchar('/');
                putchar('*');
            }
            else 
            {
                putchar('/');
                ungetc(c, stdin);
            }
        }
        
        if (in_comment && (c == '\n'))
        {
            printf("*/");
            in_comment = false;
        }

        putchar(c);
    }

    return 0;
}