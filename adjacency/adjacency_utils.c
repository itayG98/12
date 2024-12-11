#include <stdio.h>
#include "adjmant_types.h"
#include "adjacency_utils.h"

/**
 * @brief Prints the adjacency matrix in a formatted grid layout.
 *
 * This function displays the adjacency matrix representing a graph in a clear
 * and structured format.
 * @param arr An `Adjmant` structure containing the adjacency matrix to be printed.
 *
 * **Example Output**:
 *
        1    2    3    4    5    6
      ------------------------------
   1 |   0    0    0    0    0    0
   2 |   0    0    0    0    0    0
   3 |   0    1    0    0    0    0
   4 |   1    0    0    0    0    0
   5 |   0    0    1    0    0    0
   6 |   0    1    0    1    1    0
 */
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

/**
 * @brief Checks if the given index is valid for the adjacency matrix.
 * Ensures the index is within the range [0, N-1] .
 * @param index The index to validate.
 * @return Boolean
 * - `TRUE` if the index is valid.
 * - `FALSE` otherwise.
 */
Boolean validate_index(int index)
{
    if (index >= N || index < 0)
    {
        return FALSE;
    }
    return TRUE;
}

/**
 * @brief Recursively checks if a path exists between two nodes in the adjacency matrix.
 *
 * @param adj The adjacency matrix structure.
 * @param u The starting node index.
 * @param v The target node index.
 * @return Boolean
 * - `TRUE` if a path exists between `u` and `v`.
 * - `FALSE` otherwise.
 *
 * **Description**:
 * - If `u` equals `v`, a path exists (base case).
 * - Recursively explores adjacent nodes to find a path from `u` to `v`.
 */
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
