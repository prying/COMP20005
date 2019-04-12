/*****************************
 * Flynn Harrison 13/03/2019
 * simple int sort from A[n]
 ****************************/
#include <stdio.h>

#define MAX_ARRAY_SIZE 1000

void swap(int *a, int *b);

int main(void)
{
    int CurrentArraySize = 0;
    int A[MAX_ARRAY_SIZE];
    int intBuf;

    // Get input ^D to exit
    printf("input numbers to be sorted (less than %d): ", MAX_ARRAY_SIZE);
    while(scanf("%d", &intBuf) == 1 && CurrentArraySize <= MAX_ARRAY_SIZE)
    {
        A[CurrentArraySize] = intBuf;
        CurrentArraySize ++;
    }

    printf("number of elements: %d\n", CurrentArraySize);
    printf("befor: ");
    for (int i = 0; i<CurrentArraySize; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    for(int i =1; i<CurrentArraySize; i++)
    {
        // Check the ones befor it 
        for (int j=i-1; j>= 0 && A[j+1]<A[j]; j--)
        {
            swap(&A[j+1], &A[j]);
        }
    }

    printf("after: ");
    for(int i = 0; i<CurrentArraySize; i++)
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