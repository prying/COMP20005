/*****************************
 * Flynn Harrison 13/03/2019
 * Makes n size triangle
 ****************************/


#include <stdio.h>

int main(int args, char **argv)
{
    int n = 0;
    // Test input
    if (!(scanf("%d", &n) == 1))
        return 1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            printf("* ");
        }

        putchar('\n');
    }
    return 0;
}