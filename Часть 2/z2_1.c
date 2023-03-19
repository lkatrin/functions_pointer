/*Описать функцию MinElem(A, N) целого типа, находящую минимальный элемент целочисленного массива A размера N*/

#include <stdio.h>
#include <stddef.h>
typedef int Item;

Item MinElem(Item * A, int N)
{
        Item min_value = A[0];
    for (int i=0; i < N; ++i)
        if (min_value > A[i])
                min_value = A[i];
    return min_value;
}

int main()
{
    int N;
    scanf("%d",&N);
    Item A[N];
    
    for (int i=0; i < N; i++)
      scanf("%d", &A[i]);
    printf("%d", MinElem(A,N));
}