/*Написать функцию void sort_arr(int arr[], int n, int fl), которая сортирует переданный ей массив по возрастанию или убыванию,
в зависимости от значения флага fl: 0 -- от меньшего к большему, 1 -- от большего к меньшему*/
#include <stdio.h>
void sort_arr(int arr[], int n, int fl)
{
    int res=0;
    if (fl==0)
    {
       for(int i = 0 ; i < n - 1; i++) 
       for(int j = 0 ; j < n - i - 1 ; j++)
            if(arr[j] > arr[j+1]) 
            {           
               res = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = res; 
            }
    }
    
    else if (fl==1)
    {
       for(int i = 0; i < n; i++)
       for(int j = i + 1; j < n; j++)
            if (arr[i] < arr[j])
            {
               res = arr[i];
               arr[i] = arr[j];
               arr[j] = res;
            }
    }

    return arr[n];
}
