/*****************************
 * Flynn Harrison 13/03/2019
 * Gets the number of 
 * characters and lines,
 * then outputing the total
 ****************************/


#include <stdio.h>

// n to the power of p
int int_pow(int n, int p);

int main(int argc, char** argv)
{
    int in = 0,
        ip = 0;

    printf("input two numbers:");
    while (scanf("%d %d", &in, &ip) == 2)
    {
        printf("%d raisde to the %d is: %d\n", in ,ip , int_pow(in, ip));
        printf("input new numbers to be used:");
    }

    return 0;
}

int int_pow(int n, int p)
{
    int result = n;

    // power of 0 
    if (p == 0)
    {
        return 1;
    }

    // Power of p
    for(int i = 1; i < p; i++ )
    {
       result = result * n;
    }

    return result;
}