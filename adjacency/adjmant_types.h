#ifndef ADJMANT_TYPES_H
#define ADJMANT_TYPES_H

#define N 11
#define EXIT_NUMBER -1

typedef enum
{
    FALSE = 0,
    TRUE = 1
} Boolean;

typedef struct
{
    int mat[N][N];
} Adjmant;

#endif