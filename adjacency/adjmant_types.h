#ifndef ADJMANT_TYPES_H
#define ADJMANT_TYPES_H

#define N 2

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