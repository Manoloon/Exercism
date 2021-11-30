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


namespace triangle
{
    enum class flavor
            {
                equilateral,isosceles,scalene
            };
        flavor kind(double x,double y,double z);

        bool AnySideNegative(double x,double y, double z);
        bool TriangleEquality(double x,double y, double z);
}


#endif //EXERCISM_TRIANGLES_H
