#include <stdio.h>
#include "adjmant_types.h"
#include "adjacency_utils.h"

/**
 * @brief Main function for adjacency matrix path checker.
 *
 * This program allows a user to input values for an NxN adjacency matrix
 * representing a graph, where the matrix indicates connectivity between nodes.
 * The user can then repeatedly check whether a path exists between two nodes,
 * specified by their indexes, until an -1 -1 entered or EOF.
 *
 * The program follows these steps:
 * 1. Prompt the user to input values for the adjacency matrix.
 * 2. Print the matrix for reference.
 * 3. Enter a loop where the user can check for a path between two nodes:
 *    - Prompt the user for a start and end index.
 *    - Validate the indices to ensure they are within the valid range.
 *    - Check if a path exists between the specified nodes using the `path` function.
 *    - Display the result.
 * 4. Exit the loop if invalid input is encountered.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    Adjmant adj;
    Boolean flag = TRUE, res = FALSE;
    int i, j, start_index, end_index;
    i = j = start_index = end_index = 0;

    printf("\nEnter value for %dX%d matrix \n", N, N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("\nEnter value for position (%d, %d) : ", i, j);
            scanf("%d", &adj.mat[i][j]);
        }
    }
    print_matrix(adj);

    while (flag == TRUE)
    {
        printf("Enter start index: \n");
        if (scanf("%d", &start_index) != 1)
        {
            flag = FALSE;
        }
        printf("Enter end index: \n");
        if (flag && scanf("%d", &end_index) != 1)
        {
            flag = FALSE;
        }

        flag = flag && validate_index(start_index) && validate_index(end_index) ? TRUE : FALSE;
        if (flag)
        {
            res = path(adj, start_index, end_index);
            printf("\nCheck path from : %d to %d...\n", start_index, end_index);
            printf("Path exists: %s\n", res ? "true" : "false");
        }
        else if (start_index != EXIT_NUMBER || end_index != EXIT_NUMBER)
        {
            printf("\nCheck path from : %d to %d...\n", start_index, end_index);
            printf("Path exists: %s\n", res ? "true" : "false");
            flag = TRUE;
        }
    }
    return 0;
}
