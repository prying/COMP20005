/*****************************
 * Flynn Harrison 13/03/2019
 * Creates a bar graph from
 * an arbitrary lenght input
 * 
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
        if(input < pre_input){
            printf("*** value %d is smaller than %d", input, pre_input);
        }
        pre_input = input;
    }

    return 0;
}