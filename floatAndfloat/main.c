/*****************************
 * Flynn Harrison 14/03/2019
 * Lecure challange 
 * comapre two floats and 
 * compute stuff with them
 ****************************/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    float   inf1,
            inf2;
    printf("input 2 floats:");

    // Get user input
    if (scanf("%f %f", &inf1, &inf2)!= 2)
    {
        printf("Invalid input");
        return 0;
    }
    

    // Computation block
    if ((inf1 - inf2) < 1E-6 && (inf1 - inf2) > -1E-6)
        puts("Nearly equal");
    else if ( inf1 < 0 || inf2 < 0)
        printf("Sum of %f+%f = %lf\n", inf1, inf2, inf1+inf2);
    else if ( inf1 > 0 && inf2 > 0)
        printf("Product of %f * %f = %f\n", inf1, inf2, inf1+inf2);
    return 0;
}