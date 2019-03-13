#include <stdio.h>

#define POP_LIMIT 10000000

int main(int argc, char** argv)
{
    int next_no = 1,
        current_no = 1,
        previous_no = 0;
    
    // Iter through the days 
    for(int i = 0; next_no <= POP_LIMIT; i++)
    {
        // Print output befor maths to deal with 0,1,1,2.......
        printf("Current Population on day %d, is: %d\n", i, next_no);

        next_no = current_no + previous_no;
        previous_no = current_no;
        current_no = next_no;
    }
    
    printf("The population has gone over %d\n", POP_LIMIT);
    return 0;
}