//
// Created by Manoloon on 31/01/2022.
//

#ifndef EXERCISM_DIFFERENCE_OF_SQUARES_H
#define EXERCISM_DIFFERENCE_OF_SQUARES_H
/**
 * Instructions

Find the difference between the square of the sum and the sum of the squares of the first N natural numbers.

The square of the sum of the first ten natural numbers is (1 + 2 + ... + 10)² = 55² = 3025.

The sum of the squares of the first ten natural numbers is 1² + 2² + ... + 10² = 385.

Hence the difference between the square of the sum of the first ten natural numbers and the sum of the squares of the first ten natural numbers is 3025 - 385 = 2640.

You are not expected to discover an efficient solution to this yourself from first principles; research is allowed, indeed, encouraged. Finding the best algorithm for the problem is a key skill in software engineering.

 */

namespace difference_of_squares
{
    int square_of_sum(const int num);
    int sum_of_squares(const int num);
    int difference(const int num);
}
/**
 * TEST 1
 *  REQUIRE(225 == difference_of_squares::square_of_sum(5));
    REQUIRE(55 == difference_of_squares::sum_of_squares(5));
    REQUIRE(170 == difference_of_squares::difference(5));
    Test 2
    REQUIRE(3025 == difference_of_squares::square_of_sum(10));
    REQUIRE(385 == difference_of_squares::sum_of_squares(10));
    REQUIRE(2640 == difference_of_squares::difference(10));
    TEST 3
    REQUIRE(25502500 == difference_of_squares::square_of_sum(100));
    REQUIRE(338350 == difference_of_squares::sum_of_squares(100));
    REQUIRE(25164150 == difference_of_squares::difference(100));
 */

#endif //EXERCISM_DIFFERENCE_OF_SQUARES_H
