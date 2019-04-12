/*****************************
 * Flynn Harrison 13/03/2019
 * Creates a bar graph from
 * an arbitrary lenght input
 * 
 ****************************/


#include <stdio.h>
#include <stdlib.h>

#define GRAPH_MAX 70
#define GRAPH_BORDER 3

int main(int argc, char** argv)
{
    int input = 0;

    printf("enter a set between %d and %d: ", 0, GRAPH_MAX);
    while(scanf("%d", &input) == 1)
    {
        // Print out bar graph
        printf("%*d |",GRAPH_BORDER , input);
        for (int i = 0; i < input && i< GRAPH_MAX; i++)
            putchar('*');
        puts("");
    }
    printf("One or more invalid inputs");

    return 0;
}