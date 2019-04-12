/*****************************
 * Flynn Harrison 13/03/2019
 * all_zero check array for any
 * non zero entrys.
 ****************************/

#include <stdio.h>

int all_zero(int A[], int size);

int A[] = {0, 0, 0, 0, 0, 1};

int main(int argc,char **argv)
{
    printf("array A all_zeros: %d\n", all_zero(A, 8));
    return 0;
}


// Returns false if any values are not 0
int all_zero(int A[], int size)
{
    for (int i = 0; i<size; i++)
    {
        if (A[i] != 0)
            return 0;
    }
    return 1;
}
