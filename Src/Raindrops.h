//
// Created by Manoloon on 05/12/2021.
/**
Instructions

        Your task is to convert a number into a string that contains raindrop sounds corresponding to certain potential factors. A factor is a number that evenly divides into another number, leaving no remainder. The simplest way to test if a one number is a factor of another is to use the modulo operation.

The rules of raindrops are that if a given number:

has 3 as a factor, add 'Pling' to the result.
has 5 as a factor, add 'Plang' to the result.
has 7 as a factor, add 'Plong' to the result.
does not have any of 3, 5, or 7 as a factor, the result should be the digits of the number.

Examples

28 has 7 as a factor, but not 3 or 5, so the result would be "Plong".
30 has both 3 and 5 as factors, but not 7, so the result would be "PlingPlang".
34 is not factored by 3, 5, or 7, so the result would be "34".
*/
//

#ifndef EXERCISM_RAINDROPS_H
#define EXERCISM_RAINDROPS_H
#include <string>
#include <vector>
namespace raindrops {
        std::string convert(int newNumber);
        const std::vector<std::pair<int,std::string>> Factors =
        {
                {3,"Pling"},
                {5,"Plang"},
                {7,"Plong"}
        };
}




#endif //EXERCISM_RAINDROPS_H
