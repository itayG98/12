#include <stdio.h>
#include "adjmant_types.h"
#include "adjacency_utils.h"

void print_matrix(Adjmant arr)
{
    int i, j;
    i = j = 0;
    printf("Matrix:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%3d ", arr.array[i][j]);
        }
        printf("\n");
    }
}
