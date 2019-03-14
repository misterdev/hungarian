#include <stdlib.h>
#include <stdio.h>

#include "hungarian.h"

int main(int argc, char** argv)
{
    int values[5][3] = {
        {99, 100, 1},
        {98, 102, 1},
        {103, 1, 97},
        {100, 1, 101},
        {3, 2, 1},
    };
    const int N = 5;
    const int M = 3;
    int **cost = malloc(N * sizeof(int *));
    cost[0] = malloc(N * M * sizeof(int));
    for(int i = 1; i < N; i++)
        cost[i] = cost[0] + i * M;

    for(int r = 0; r < N; r++)
        for(int c = 0; c < N; c++)
            cost[r][c] = values[r][c];

    printMatrix(cost, 5, 3);
//   Hungarian::PrintMatrix(cost);

//   Hungarian::Result min;
//   min.solve(cost, Hungarian::MODE_MINIMIZE_COST);

    int *tracks = malloc(N * sizeof(int));
    int *dets = malloc(M * sizeof(int));
    
    solve(cost, tracks, dets, N, M);


    printMatrix(cost, 5, 3);
//   Hungarian::Result max;
//   max.solve(cost, Hungarian::MODE_MAXIMIZE_UTIL);

//   Hungarian::PrintMatrix(min.assignment);
//   Hungarian::PrintMatrix(min.cost);

//   for(int i = 0; i < min.assignment.size(); ++i)
//   {
//     cout << "w " << i << " j " << ( ( min.col_mate[i] < cost[0].size() ) ? to_string(min.col_mate[i]) : "NO MATCH" ) << endl;
//     for(int j = 0; j < min.assignment[0].size(); ++j)
//     {

//     }
//   }

  return 0;
}