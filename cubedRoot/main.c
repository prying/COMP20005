/*****************************
 * Flynn Harrison 13/03/2019
 * Gets the number of 
 * characters and lines,
 * then outputing the total
 ****************************/


#include <stdio.h>
#include <math.h>

#define CUBE_MAX 1E6
#define CUBE_MIN 1E-6
#define CUBE_ITR 25

// Using some method iterated produces and 
// aproximation for the cubed root
double cubeRoot(double v);

int main(int argc, char** argv)
{
    printf("%lf\n", cubeRoot(8));
    return 0;
}

double cubeRoot(double v)
{
    double next = 1.0; 
    
    // Out of range
    if (CUBE_MIN > fabs(v) || CUBE_MAX < fabs(v))
    {
        puts("Error: CubeRoot function input is out of range");
    }

    for (int i =0; i < CUBE_ITR; i++)
    {
        next = (2*next + (v/(next*next)))/3;
    }
    return next;
}