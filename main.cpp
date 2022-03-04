#include <iostream>
#include <string>
#include "Src/pascal_triangle.h"

int main()
{
    std::vector<std::vector<int>> actual = pascals_triangle::generate_rowsPerf(3);
    for (auto it = actual.begin(); it != actual.end(); ++it)
    {
         for(auto& element : *it)
           {
               std::cout << element << " ";
           }
           std::cout << "\n";
    }
     /**
    VisualPatterns::HalfPyramidLeft(10);
    VisualPatterns::HalfInvertedPyramidLeft(10);
    VisualPatterns::FullPyramid(10);
    VisualPatterns::Square(10);*/
   return 0;
}