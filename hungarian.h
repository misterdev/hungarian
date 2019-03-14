
#pragma once

typedef enum {
  MODE_MINIMIZE_COST,
  MODE_MAXIMIZE_UTIL,
} MODE;

typedef enum {
  NOT_ASSIGNED,
  ASSIGNED,
} ASSIGN;

/**
 * Runs the hungarian algorithm on the input cost matrix and returns a result
 * containing the normalized (square) cost matrix and a solution if one was
 * found.
 */

// Result Solve(const Matrix &input, MODE mode);
// void PrintMatrix(const Matrix &m);

#ifdef __cplusplus
extern "C" {
#endif

void solve(int **input, int *tracks, int *dets, int rows, int cols); // TODO rename NxM
void printMatrix(int **m, int rows, int cols);

#ifdef __cplusplus
}
#endif
