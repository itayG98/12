#include <stdio.h>
#include "adjmant_types.h"
#include "adjacency_utils.h"

void print_matrix(Adjmant arr)
{
    int i, j;
    printf("\n     ");
    for (i = 1; i <= N; i++)
    {
        printf("%4d ", i);
    }
    printf("\n      ");
    for (i = 0; i < N; i++)
    {
        printf("-----");
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%4d |", i + 1);
        for (j = 0; j < N; j++)
        {
            printf("%4d ", arr.mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

Boolean validate_index(int index)
{
    if (index >= N || index < 0 || index == EOF)
    {
        return FALSE;
    }
    return TRUE;
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
        if (adj.mat[u][i] == 1 && path(adj, i, v))
        {
            return TRUE;
        }
        i++;
    }
    return FALSE;
}
