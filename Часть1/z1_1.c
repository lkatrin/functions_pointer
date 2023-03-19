/*Задание 1. Написать функцию void sum_digits(int * x), которая заменяет число x на сумму цифр из которых состоит число x*/

#include <stdio.h>
void sum_digits(int * x)
{
    int res = *x;
    for (*x=0; res; res/=10)
      *x += res % 10;
}