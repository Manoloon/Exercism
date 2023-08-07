//
// Created by Manoloon on 21/02/2022.
//
/**
 * An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.
For example::
    9 is an Armstrong number, because 9 = 9^1 = 9
    10 is not an Armstrong number, because 10 != 1^2 + 0^2 = 1
    153 is an Armstrong number, because: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
    154 is not an Armstrong number, because: 154 != 1^3 + 5^3 + 4^3 = 1 + 125 + 64 = 190
Write some code to determine whether a number is an Armstrong number.
 */
#ifndef EXERCISM_ARMSTRONG_NUMBERS_H
#define EXERCISM_ARMSTRONG_NUMBERS_H

namespace armstrong_numbers
{
   bool is_armstrong_number(const int newNumber);
}
/**
 * REQUIRE(armstrong_numbers::is_armstrong_number(0));
 * REQUIRE(armstrong_numbers::is_armstrong_number(5));
 * REQUIRE_FALSE(armstrong_numbers::is_armstrong_number(10));
 * REQUIRE(armstrong_numbers::is_armstrong_number(153));
 * REQUIRE_FALSE(armstrong_numbers::is_armstrong_number(100));
 * REQUIRE(armstrong_numbers::is_armstrong_number(9474));
 * REQUIRE_FALSE(armstrong_numbers::is_armstrong_number(9475));
 * REQUIRE(armstrong_numbers::is_armstrong_number(9926315));
 * REQUIRE_FALSE(armstrong_numbers::is_armstrong_number(9926314));
 */
#endif //EXERCISM_ARMSTRONG_NUMBERS_H
