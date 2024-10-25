#ifndef ADJMANT_TYPES_H
#define ADJMANT_TYPES_H

#define N 5

typedef enum
{
    FALSE = 0,
    TRUE = 1
} Boolean;

typedef struct
{
    short array[N][N];
} Adjmant;

#endif
