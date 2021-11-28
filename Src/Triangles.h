//
// Created by Manoloon on 28/11/2021.
// Instructions
// Determine if a triangle is equilateral, isosceles, or scalene.
// An equilateral triangle has all three sides the same length.
// An isosceles triangle has at least two sides the same length.
// (It is sometimes specified as having exactly two sides the same length,
// but for the purposes of this exercise we'll say at least two.)
// A scalene triangle has all sides of different lengths.
//

#ifndef EXERCISM_TRIANGLES_H
#define EXERCISM_TRIANGLES_H
#include <vector>

class Triangles
{
    explicit
    Triangles(std::vector<int>{x,y,z});

     /**
     *     REQUIRE(triangle::flavor::equilateral == triangle::kind(10, 10, 10));
     *   TEST_CASE("isosceles_triangles_have_last_two_sides_equal")
    *   REQUIRE(triangle::flavor::isosceles == triangle::kind(3, 4, 4));
    *TEST_CASE("isosceles_triangles_have_first_and_last_sides_equal")
      * REQUIRE(triangle::flavor::scalene == triangle::kind(0.4, 0.6, 0.3));
*/
};


#endif //EXERCISM_TRIANGLES_H
