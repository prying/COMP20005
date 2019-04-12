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
    printf("intput: ");
    for (int i = 0; i<CurrentArraySize; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Sort array first
    for(int i =1; i<CurrentArraySize; i++)
    {
        // Check the ones befor it 
        for (int j=i-1; j>= 0 && A[j+1]<A[j]; j--)
        {
            swap(&A[j+1], &A[j]);
        }
    }

    /* Since array is sorted all the repeated numbers will be next to
    each other => sum up the amount of times the same char is used*/

    printf("Value   Freq\n");
    for(int i=0; i<CurrentArraySize; i++)
    {
        int j = 1;
        while(A[i] == A[i+1])
        {
            j++;
            i++;
        }

        printf("%4d %6d\n", A[i], j);
    }
}

void swap(int *a, int *b)
{
    int buff = *b;
    *b = *a;
    *a = buff;
}