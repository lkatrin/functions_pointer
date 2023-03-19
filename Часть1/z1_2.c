/*Написать функцию void minmax(int * x, int * y),
записывающую в переменную x минимальное из значений x и y, а в переменную y -- максимальное из этих значений*/

#include <stdio.h>
void minmax(int * x, int * y)
{
    int res;
    if (*x > *y)
    {
        res = *x;
        *x = *y;
        *y = res;
    }     
}