/*****************************
 * Flynn Harrison 13/03/2019
 * Function that is fed a 
 * number and will output 
 * the next prime number
 ****************************/


#include <stdio.h>

long int next_prime(long int x);

int main(int args, char **argv)
{
    long int in;
    printf("input a number:");
    if (!(scanf("%ld", &in)==1))
    {
        printf("\n invalid input");
        return 1;
    }
    
    printf("Next prime:%ld", next_prime(in));
    
    return 0;
}

long int next_prime(long int x)
{
    // Add one to x so x in not the answer
    x++;
    // All factors are less then the square root of components 
    for (long int i = 2; (i*i)<=x; i++)
    {
        if (x%i == 0)
        {
            x++;
            i = 2;
        }
    }
    return x;
}

