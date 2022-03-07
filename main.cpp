#include <iostream>
#include <string>
#include <vector>
#include "Src/binary_search.h"

int main()
{
    const std::vector<int> data {1, 3, 4, 6, 8, 9, 11,212,4312,455,7,154523,4234234,42356,2345,66775,88956};
    const std::size_t actual = binary_search::find(data, 2);
    const std::size_t expected = 3;
    if(actual == expected)
    {
        std::cout << "found at position : " << actual<<std::endl;
    }
    else
    {
        std::cout << "found at position : " << actual<<std::endl;
    }
    /**
    for (auto it = actual.begin(); it != actual.end(); ++it)
    {
         for(auto& element : *it)
           {
               std::cout << element << " ";
           }
           std::cout << "\n";
    }

    VisualPatterns::HalfPyramidLeft(10);
    VisualPatterns::HalfInvertedPyramidLeft(10);
    VisualPatterns::FullPyramid(10);
    VisualPatterns::Square(10);
     */
   return 0;
}