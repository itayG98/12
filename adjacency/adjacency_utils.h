#ifndef ADJACENCY_UTILS_H
#define ADJACENCY_UTILS_H

/**
 * @brief Prints the adjacency matrix in a formatted grid layout.
 *
 * This function displays the adjacency matrix representing a graph in a clear
 * and structured format.
 * @param arr An `Adjmant` structure containing the adjacency matrix to be printed.
 *
 * **Example Output**:
 *
        0    1    2    3    4    5
      ------------------------------
   0 |   0    0    0    0    0    0
   1 |   0    0    0    0    0    0
   2 |   0    1    0    0    0    0
   3 |   1    0    0    0    0    0
   4 |   0    0    1    0    0    0
   5 |   0    1    0    1    1    0
 */
void print_matrix(Adjmant arr);

/**
 * @brief Checks if the given index is valid for the adjacency matrix.
 * Ensures the index is within the range [0, N-1] .
 * @param index The index to validate.
 * @return Boolean
 * - `TRUE` if the index is valid.
 * - `FALSE` otherwise.
 */
Boolean validate_index(int index);

/**
 * @brief Recursively checks if a path exists between two nodes in the adjacency matrix.
 *
 * @param adj The adjacency matrix structure.
 * @param u The starting node index.
 * @param v The target node index.
 * @return Boolean
 * - `TRUE` if a path exists between `u` and `v`.
 * - `FALSE` otherwise.
 *
 * **Description**:
 * - If `u` equals `v`, a path exists (base case).
 * - Recursively explores adjacent nodes to find a path from `u` to `v`.
 */
Boolean path(Adjmant adj, int u, int v);

#endif
