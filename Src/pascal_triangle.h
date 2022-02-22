//
// Created by Manoloon on 22/02/2022.
//
/**
 * Instructions
Compute Pascal's triangle up to a given number of rows.
In Pascal's Triangle each number is computed by adding the numbers to the right and left of the current position in the previous row.

    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
# ... etc
 */
#ifndef EXERCISM_PASCAL_TRIANGLE_H
#define EXERCISM_PASCAL_TRIANGLE_H
#include <vector>
namespace pascals_triangle
{
   std::vector<std::vector<int>> generate_rows(int numRows);
}
/*
 *  REQUIRE(expected == actual);
 *      pascals_triangle::generate_rows(0)
 *      pascals_triangle::generate_rows(1)
 *     const std::vector<std::vector<int>> expected{{1}
 *     pascals_triangle::generate_rows(2)
 *     const std::vector<std::vector<int>> expected{{1},{1,1}
 *     pascals_triangle::generate_rows(3)
 *     const std::vector<std::vector<int>> expected{{1},{1,1},{1,2,1}
 *     pascals_triangle::generate_rows(4)
 *     const std::vector<std::vector<int>> expected{{1},{1,1},{1,2,1},{1,3,3,1}
 *     pascals_triangle::generate_rows(5)
 *     const std::vector<std::vector<int>> expected{{1},{1,1},{1,2,1},{1,3,3,1},{1,4,6,4,1}
 *     pascals_triangle::generate_rows(6)
 *     const std::vector<std::vector<int>> expected{{1},{1,1},{1,2,1},{1,3,3,1},{1,4,6,4,1},{1,5,10,10,5,1}
 *
      const std::vector<std::vector<int>> actual{pascals_triangle::generate_rows(10)};
 *         const std::vector<std::vector<int>> expected{
      {1},
      {1, 1},
      {1, 2, 1},
      {1, 3, 3, 1},
      {1, 4, 6, 4, 1},
      {1, 5, 10, 10, 5, 1},
      {1, 6, 15, 20, 15, 6, 1},
      {1, 7, 21, 35, 35, 21, 7, 1},
      {1, 8, 28, 56, 70, 56, 28, 8, 1},
      {1, 9, 36, 84, 126, 126, 84, 36, 9, 1}
 */

#endif //EXERCISM_PASCAL_TRIANGLE_H
