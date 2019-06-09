/***************************************
 * Merge sort example
 * by Flynn Harrison
 * 8/5/2019
 **************************************/ 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


void mergeSort(int *A, size_t n);
void merge(int *A, size_t split, size_t n);


int main(void)
{
    int A[] = {41, 32, 6, 94, 23, 9, 80, 34, 25, 16};
    puts("Unsorted:");
    for(int i = 0; i<sizeof(A)/sizeof(int); i++)
    {
        printf("%d ", A[i]);
    }
    mergeSort(A, sizeof(A)/sizeof(int));
    puts("\nSorted:");
    for(int i = 0; i<sizeof(A)/sizeof(int); i++)
    {
        printf("%d ", A[i]);
    }
    puts(" ");
}

void mergeSort(int *A, size_t n)
{
    if (n <= 1)
        return;
        
    size_t split = n/2;

    mergeSort(A, split);
    mergeSort(A+split, n-split);
    merge(A, split, n);
}

void merge(int *A, size_t split, size_t n)
{
    int T[split];
    memcpy(T, A, split*sizeof(int)); 
    
    size_t i    = 0;
    size_t s1   = 0;
    size_t s2   = split;

    while(s1<split && s2<n)
    {
        if(T[s1]<A[s2])
            A[i++] = T[s1++];
        else
            A[i++] = A[s2++];
    }
    while(s1<split)
        A[i++] = T[s1++];
}