//
// Created by Manoloon on 31/01/2022.
//
/**
 * Instructions

Find the difference between the square of the sum and the sum of the squares of the first N natural numbers.

The square of the sum of the first ten natural numbers is (1 + 2 + ... + 10)² = 55² = 3025.

The sum of the squares of the first ten natural numbers is 1² + 2² + ... + 10² = 385.

Hence the difference between the square of the sum of the first ten natural numbers and the sum of the squares of the first ten natural numbers is 3025 - 385 = 2640.

You are not expected to discover an efficient solution to this yourself from first principles; research is allowed, indeed, encouraged. Finding the best algorithm for the problem is a key skill in software engineering.

 */

#include "difference_of_squares.h"
#include <numeric>
#include <cassert>
#include <vector>

namespace difference_of_squares
{
    int square_of_sum(const int num)
    {
        assert(num >=0);
        std::vector <int> numVec(num);
        std::iota(numVec.begin(),numVec.end(),1);
        const int result = std::accumulate(numVec.begin(),numVec.end(),0);
        return result*result;
    }

    int sum_of_squares(const int num)
    {
        assert(num >=0);
        std::vector <int> numVec(num);
        std::iota(numVec.begin(),numVec.end(),1);
        return std::inner_product( numVec.begin(), numVec.end(), numVec.begin(), 0 );
    }

    int difference(const int num)
    {
        assert(num >=0);
        const int sqSum = square_of_sum(num);
        const int sumSqr = sum_of_squares(num);
        return sqSum - sumSqr;
    }
}