//
// Created by Manoloon on 28/11/2021.
//

#include "Triangles.h"
#include <stdexcept>

namespace triangle
{
    // error por ser negativo o cero .
    void AssertTriangleIsValid(double x,double y, double z)
    {
        if (AnySideNegative(x,y,z) || !TriangleEquality(x,y,z)) { return throw std::domain_error("invalid triangle"); }
    }

    bool AnySideNegative(double x,double y, double z)
    {
        return ((x <= 0) || (y <= 0) || (z <= 0));
    }
    //  and the sum of the lengths of any two sides must be greater than or equal to the length of the third side.
    //triangle innequality
    bool TriangleEquality(double x,double y, double z)
    {
        return (x+y >=z) && (x+z >=y) && (y+z>=x);
    }

    flavor kind(double x, double y, double z)
    {
        // negative in data.
        AssertTriangleIsValid(x,y,z);

        //all side equals.
        if ((x == y) && (x == z)) { return flavor::equilateral; }
            // two sides are equal
        else if ((x == y) || (x == z) || (y == z)) { return flavor::isosceles; }
        else { return flavor::scalene; }
    }
}
