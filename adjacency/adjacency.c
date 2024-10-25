#include <stdio.h>
#include "adjmant_types.h"
#include "adjacency_utils.h"

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

    printf("Enter start index: ");
    scanf("%d", &start_index);

    printf("Enter end index: ");
    scanf("%d", &end_index);

    flag = validate_index(start_index) && validate_index(end_index) ? TRUE : FALSE;
    if (flag)
    {
        res = path(adj, start_index, end_index);
        printf("Path exists: %s\n", res ? "true" : "false");
    }

    return 0;
}
