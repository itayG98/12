#include <stdio.h>
#include "adjmant_types.h"
#include "adjacency_utils.h"

void print_matrix(Adjmant arr)
{
    int i, j;
    i = j = 0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%3d ", arr.array[i][j]);
        }
        printf("\n");
    }
}

Boolean path(Adjmant adj, int u, int v)
{
    int i = 0;
    if (u == v)
    {
        return TRUE;
    }
    while (i < N)
    {
        if (adj.array[u][i] == 1 && path(adj, i, v))
        {
            return TRUE;
        }
        i++;
    }
    return FALSE;
}
