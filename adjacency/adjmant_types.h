#ifndef ADJMANT_TYPES_H
#define ADJMANT_TYPES_H

#define N 5
#define EXIT_NUMBER -1

typedef enum
{
    FALSE = 0,
    TRUE = 1
} Boolean;

/*A struct representing the graph structure connection using a matrix*/
typedef struct
{
    int mat[N][N];
} Adjmant;

#endif