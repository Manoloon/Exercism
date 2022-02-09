//
// Created by Manoloon on 31/01/2022.
//

#ifndef EXERCISM_COLLATZ_CONJECTURE_H
#define EXERCISM_COLLATZ_CONJECTURE_H
/**
 * Instructions
   The Collatz Conjecture or 3x+1 problem can be summarized as follows:
    Take any positive integer n. If n is even, divide n by 2 to get n / 2. If n is odd, multiply n by 3 and add 1 to get 3n + 1.
    Repeat the process indefinitely. The conjecture states that no matter which number you start with, you will always reach 1 eventually.
    Given a number n, return the number of steps required to reach 1.
 */
namespace collatz_conjecture
{
    void checkNumberIsValid(int num);
    int steps(int number);
}
/*
 *  REQUIRE(0 == collatz_conjecture::steps(1));
 *  REQUIRE(4 == collatz_conjecture::steps(16));
 *  REQUIRE(9 == collatz_conjecture::steps(12));
 *  REQUIRE(152 == collatz_conjecture::steps(1000000));
 *  REQUIRE_THROWS_AS(collatz_conjecture::steps(0), std::domain_error);
 *  REQUIRE_THROWS_AS(collatz_conjecture::steps(-15), std::domain_error);
 *
 */

#endif //EXERCISM_COLLATZ_CONJECTURE_H
