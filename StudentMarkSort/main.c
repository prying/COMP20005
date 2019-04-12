/*****************************
 * Flynn Harrison 13/03/2019
 * simple int sort from A[n]
 ****************************/
#include <stdio.h>

#define MAX_ARRAY_SIZE 1000

void swap(int *a, int *b);
void swap_2d(int a[2], int b[2]);

int main(void)
{
    int CurrentArraySize = 0;
    int A[MAX_ARRAY_SIZE][2];
    int SNbuff, Mkbuff;

    // Get input ^D to exit
    printf("input numbers to be sorted (less than %d): ", MAX_ARRAY_SIZE);
    while(scanf("%d %d", &SNbuff, &Mkbuff) == 2 && CurrentArraySize <= MAX_ARRAY_SIZE)
    {
        A[CurrentArraySize][0] = SNbuff;
        A[CurrentArraySize][1] = Mkbuff;
        CurrentArraySize ++;
    }

    printf("\nnumber of elements: %d\n", CurrentArraySize);

    // Sort array first
    for(int i =1; i<CurrentArraySize; i++)
    {
        // Check the ones befor it 
        for (int j=i-1; j>= 0 && A[j+1][0]<A[j][0]; j--)
        {
            swap_2d(&A[j+1][0], &A[j][0]);
        }
    }

    /* Since array is sorted all the repeated numbers will be next to
    each other => sum up the amount of times the same char is used*/

    printf("student mark\n");
    for (int i =0; i<CurrentArraySize; i++)
    {
        printf("%6d %2d\n", A[i][0], A[i][1]);
    }
}

void swap(int *a, int *b)
{
    int buff = *b;
    *b = *a;
    *a = buff;
}
void swap_2d(int a[2], int b[2])
{
    swap(&a[0], &b[0]);
    swap(&a[1], &b[1]);
}