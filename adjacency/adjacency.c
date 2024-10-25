#include <stdio.h>
#include "adjmant_types.h"
#include "adjacency_utils.h"

int main()
{
    Adjmant a;
    int i = 0, j = 0, temp = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a.array[i][j] = i * j;
        }
    }
    print_matrix(a);
    printf("%d", path(a, 1, 5));
    scanf("%d", &i);
    return 1;
}
