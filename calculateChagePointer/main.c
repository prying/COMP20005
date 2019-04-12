/*****************************
 * Flynn Harrison 13/03/2019
 * sort function that sort in
 * assending order 
 ****************************/


#include <stdio.h>

void int_sort(int *i1, int *i2);
void swap(int *a, int *b);
void int_devider(int numerator, int denominator, int *quotient, int *remander);
int try_one_coin(int *cents, int coin);

int main(int argc, char** argv)
{
    int cents = 99;
    int no_coin = 0;
    try_one_coin(&cents, 20);
    printf("%d of %d, remander %d", no_coin, 20, cents);

    return 0;
}

void int_devider(int numerator, int denominator, int *quotient, int *remander)
{
    *quotient = numerator/denominator;
    *remander = numerator%denominator;
}

int try_one_coint(int *cents, int coin)
{
    int coins = 0;
    int_devider(*cents, coin, &coins, cents);
    return coins;  
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

