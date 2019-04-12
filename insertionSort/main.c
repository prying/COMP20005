/*****************************
 * Flynn Harrison 13/03/2019
 * simple int sort from A[n]
 ****************************/
#include <stdio.h>


void swap(int *a, int *b);

int main(void)
{
    int A[] = {18, 6, 8, 3,27,3, 10, 40, 5};
    printf("number of elements: %d\n", sizeof(A)/sizeof(int));
    printf("befor: ");
    for (int i = 0; i<sizeof(A)/sizeof(int); i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    for(int i =1; i<sizeof(A)/sizeof(int); i++)
    {
        // Check the ones befor it 
        for (int j=i-1; j>= 0 && A[j+1]<A[j]; j--)
        {
            swap(&A[j+1], &A[j]);
        }
    }

    printf("after: ");
    for(int i = 0; i<sizeof(A)/sizeof(int); i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int buff = *b;
    *b = *a;
    *a = buff;
}