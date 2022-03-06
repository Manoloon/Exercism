//
// Created by Manoloon on 06/03/2022.
//
/**
 * Instructions
Compute the prime factors of a given natural number.
A prime number is only evenly divisible by itself and 1.
Note that 1 is not a prime number.
Example
What are the prime factors of 60?

    Our first divisor is 2. 2 goes into 60, leaving 30.
    2 goes into 30, leaving 15.
        2 doesn't go cleanly into 15. So let's move on to our next divisor, 3.
    3 goes cleanly into 15, leaving 5.
        3 does not go cleanly into 5. The next possible factor is 4.
        4 does not go cleanly into 5. The next possible factor is 5.
    5 does go cleanly into 5.
    We're left only with 1, so now, we're done.

Our successful divisors in that computation represent the list of prime factors of 60: 2, 2, 3, and 5.
You can check this yourself:
    2 * 2 * 3 * 5
    = 4 * 15
    = 60
    Success!
 */
#ifndef EXERCISM_PRIME_FACTOR_H
#define EXERCISM_PRIME_FACTOR_H
#include <vector>

namespace prime_factor
{
    std::vector<int> of(int number);
}
/**
 * const std::vector<int> actual{prime_factors::of(1)};
 *  const std::vector<int> expected{};
 * const std::vector<int> actual{prime_factors::of(2)};
 *  const std::vector<int> expected{2};
 * const std::vector<int> actual{prime_factors::of(3)};
 *  const std::vector<int> expected{3};
 * const std::vector<int> actual{prime_factors::of(4)};
 *  const std::vector<int> expected{2, 2};
 * const std::vector<int> actual{prime_factors::of(6)};
 *  const std::vector<int> expected{2, 3};
 * const std::vector<int> actual{prime_factors::of(8)};
 *  const std::vector<int> expected{2, 2, 2};
 * const std::vector<int> actual{prime_factors::of(9)};
 *  const std::vector<int> expected{3, 3};
 * const std::vector<int> actual{prime_factors::of(27)};
 *  const std::vector<int> expected{3, 3, 3};
 * const std::vector<int> actual{prime_factors::of(625)};
 *  const std::vector<int> expected{5, 5, 5, 5};
 * const std::vector<int> actual{prime_factors::of(901255)};
 *  const std::vector<int> expected{5, 17, 23, 461};
 */

#endif //EXERCISM_PRIME_FACTOR_H
