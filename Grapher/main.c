#include <stdio.h>
#include <stdlib.h>

#define GRAPH_MAX 70
#define GRAPH_BORDER 3

int main(int argc, char** argv)
{
    int input = 0;
    //int no_in = 0;

    // Get user imput 
    printf("Input data, control D/Z to exit: ");
    if (scanf("%d", &input) != 1)
    {
        printf("\nNot vailid data!");
        exit(EXIT_FAILURE);    
    }
    
    // Make a gap between input and output
    puts("");

    // Print out single bar graph
    printf("%*d |",GRAPH_BORDER, input);
    for (int i = 0; i < input && i< GRAPH_MAX; i++)
        putchar('*');
    puts("");

    while(scanf("%d", &input) == 1)
    {
        // Print out bar graph
        printf("%*d |",GRAPH_BORDER , input);
        for (int i = 0; i < input && i< GRAPH_MAX; i++)
            putchar('*');
        puts("");
    }

    return 0;
}