/*****************************
 * Flynn Harrison 13/03/2019
 * sort function that sort in
 * assending order 
 ****************************/


#include <stdio.h>

void int_sort(int *i1, int *i2);
void swap(int *a, int *b);

int main(int argc, char** argv)
{
    int input1, input2;
    printf("two numbers to be swaped:");
    scanf("%d %d",&input1, &input2);

    int_sort(&input1, &input2);
    printf("%d %d", input1, input2);
    return 0;
}

void swap(int *a, int *b)
{
    int buff = *b;
    *b = *a;
    *a = buff;
}

void int_sort(int *i1, int *i2)
{ 
    if (*i1 > *i2)
        swap(i1, i2);
}

