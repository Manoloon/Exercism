#include <iostream>
#include <string>
#include "Src/prime_factor.h"

int main()
{
    auto prime = prime_factors::of(901255);
    for (auto i : prime)
    {
        std::cout << i << " ";
        std::cout << "\n";
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