#include <stdio.h>
#include "adjmant_types.h"
#include "adjacency_utils.h"

int main()
{
    BOOLEAN b = 1;
    Adjmant a;
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a.array[i][j] = i * j;
        }
    }
    print_matrix(a);
    scanf("%d", &b);
    return 1;
}
