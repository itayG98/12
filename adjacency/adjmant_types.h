#ifndef ADJMANT_TYPES_H
#define ADJMANT_TYPES_H

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

#endif
