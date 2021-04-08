#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <malloc.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
//Алгоритмы и структуры данных. Урок 3. Казанцев Иван.
//task 2 function
int binarysearch(int a, int mass[], int n)
{
    int low, high, middle;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (a < mass[middle])
            high = middle - 1;
        else if (a > mass[middle])
            low = middle + 1;
        else
            return middle;
    }
    return -1;
}

int main(int argc, char* argv[])
{
    //task1
    int N;
    printf("Input N: ");
    scanf_s("%d", &N);
    int* mass;
    int* mass2;
    mass = (int*)malloc(N * sizeof(int));

    printf("Input the array elements:\n");
    for (int i = 0; i < N; i++)
        scanf_s("%d", &mass[i]);

    int tmp;
    bool noSwap;

    for (int i = N - 1; i >= 0; i--)
    {
        noSwap = 1;
        for (int j = 0; j < i; j++)
        {
            if (mass[j] > mass[j + 1])
            {
                tmp = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = tmp;
                noSwap = 0;
            }
        }
        if (noSwap == 1)
            break;
    }

    printf("Sorted array:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", mass[i]);
    printf("\n");
 
    //task2
    int a = binarysearch(5, mass, N);
    printf("a = %d", a);

    free(mass);

    return 0;

}