/*****************************
 * Flynn Harrison 13/03/2019
 * Works out least amount of 
 * coins needed to make up
 * input. 
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

    // Get input
    printf("Input amount in cents:");
    
    if (scanf("%d", &cents) != 1)
    {
        printf("Error:Failed to pass as int");
        return 1;
    }
    
    // Validate input
    while (cents > INPUT_MAX || cents < INPUT_MIN)
    {
        printf("input needs to be between 0 and 99 cents, try again:");
        scanf("%d", &cents);
    }
    printf("The coins required to make %d cents are\n", cents);

    // Iterrate through each coin value from large to small
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

