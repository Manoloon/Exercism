//
// Created by Manoloon on 11/02/2022.
//
/**
 * Instructions
 * Dado un numero, encuentra la suma de todos los multiplos unicos de ciertos numeros hasta dicho numero sin incluirlo.
 * Si listamos todos los naturales menores a 20 que son multiplos de 3 y 5, obtenemos : 3,5,6,9,10,12,15 y 18.
 * La suma de estos es 78.
Given a number, find the sum of all the unique multiples of particular numbers up to but not including that number.
If we list all the natural numbers below 20 that are multiples of 3 or 5, we get 3, 5, 6, 9, 10, 12, 15, and 18.
The sum of these multiples is 78.
 */
#ifndef EXERCISM_SUM_OF_MULTIPLES_H
#define EXERCISM_SUM_OF_MULTIPLES_H
#include <vector>
namespace sum_of_multiples
{
    int to(const std::vector<int> &multipliers,const int N=0);
}
/**
 * REQUIRE(0 == sum_of_multiples::to({3, 5}, 0));
 * REQUIRE(3 == sum_of_multiples::to({3, 5}, 4));
 * REQUIRE(23 == sum_of_multiples::to({3, 5}, 10));
 * REQUIRE(2318 == sum_of_multiples::to({3, 5}, 100));
 * REQUIRE(233168 == sum_of_multiples::to({3, 5}, 1000));
 * REQUIRE(51 == sum_of_multiples::to({7, 13, 17}, 20));
 * REQUIRE(30 == sum_of_multiples::to({4, 6}, 15));
 * REQUIRE(4419 == sum_of_multiples::to({5, 6, 8}, 150));
 * REQUIRE(275 == sum_of_multiples::to({5, 25}, 51));
 * REQUIRE(2203160 == sum_of_multiples::to({43, 47}, 10000));
 * REQUIRE(4950 == sum_of_multiples::to({1}, 100));
 * REQUIRE(0 == sum_of_multiples::to({}, 10000));
 */

#endif //EXERCISM_SUM_OF_MULTIPLES_H
