/*****************************
 * Flynn Harrison 13/03/2019
 * Gets the number of 
 * characters and lines,
 * then outputing the total
 ****************************/


#include <stdio.h>

#define INPUT_MAX 99
#define INPUT_MIN 0

// Define coins 
#define NUMBER_COINS 5
static int coins[] = {50, 20, 10, 5, 1};

int main(int argc, char** argv)
{
    int cents = 0;

    printf("Input amount in cents:");
    scanf("%d", &cents);
    while (cents > INPUT_MAX || cents < INPUT_MIN)
    {
        printf("input needs to be between 0 and 99 cents, try again:");
        scanf("%d", &cents);
    }
    printf("The coins required to make %d cents are\n", cents);

    for (int i = 0; i < NUMBER_COINS; i++)
    {
        while (cents >= coins[i])
        {
            cents -= coins[i];
            printf("%d", coins[i]);

            if (cents != 0)
                printf(", ");

        }
    }
    return 0;
}

