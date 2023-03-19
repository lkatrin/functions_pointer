/*Напишите функцию int minmax(int arr[], int n, int fl), которая возвращает максимальный или минимальный элемент массива arr,
в зависимости от значения флага fl. 0 -- минимум, 1 -- максимум*/
#include <stdio.h>
int minmax(int arr[], int n, int fl)
{
    int min_value=0, max_value=0;
    if (fl==0)
    {
        for (int i=0; i < n; ++i)
            if (min_value > arr[i])
                min_value = arr[i];
    return min_value;
    }
    
    else if (fl==1)
    {
        for (int i=0; i < n; ++i)
            if (max_value < arr[i])
                max_value = arr[i];
    return max_value;
    }
}
