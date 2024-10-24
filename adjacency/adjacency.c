#include <stdio.h>
#define N 10

typedef enum
{
    FALSE = 0,
    TRUE = 1
} BOOLEAN;

typedef struct
{
    int array[N][N];
} Adjmant;

void print_matrix(Adjmant arr);

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

void print_matrix(Adjmant arr)
{
    int i = 0, j = 0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%2d ", arr.array[i][j]);
        }
        printf("\n");
    }
}