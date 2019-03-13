/*****************************
 * Flynn Harrison 13/03/2019
 * Sums up user inputed 
 * numbers without the use of
 * scanf function
 ****************************/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char** argv)
{
    float input, buffer = 0
                , sum = 0;
    int dec_buff =0, dev = 0;

    // Get user input
    printf("input a siries of numbers:\n");

    // Loop that ends at ^D or ^Z (os dependant, ctrl)
    while ((input = getchar()) != EOF)
    {
        int is_dec = 0;
        while (isdigit(input))
        {
            // Check if adding befor or after '.'
            if (is_dec == 0)
            {
                buffer = (buffer * 10) + (input - '0');
            }
            else
            {
                // Get the devisor to shift the decimal place
                dev = 10;
                for (int i = 1; i < is_dec; i++)
                    dev *= 10;
                    
                buffer += (input - '0')/(dev);
            }

            // Get new input
            input = getchar();

            // Peak into the stdin stream for decimals
            if (input == '.')
            {
                dec_buff = getchar();
                if (isdigit(dec_buff))
                {
                    input = dec_buff;
                    is_dec++; 
                }
                else
                {   
                    // Return unused charaters
                    ungetc(dec_buff, stdin);
                    break;
                }  
            }
        }
        sum += buffer;
        buffer = 0;
    }

    // Return sum 
    printf("sum: %.2f\n", sum);
    
    return 0;
}