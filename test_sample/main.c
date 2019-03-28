/*****************************
 * Flynn Harrison 13/03/2019
 * Example code for a example
 * question.
 * This code compares the previous
 * input to the current one 
 ****************************/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int input = 0;
    int pre_input = 0;

    // While there is an input get it
    while(scanf("%d", &input) == 1)
    {
        if(input < pre_input)
        {
            printf("*** value %d is smaller than %d\n", input, pre_input);
        }
        // Store the input 
        pre_input = input;
    }

    return 0;
}