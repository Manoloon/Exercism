#include <iostream>
#include <string>
#include "Src/pascal_triangle.h"

int main()
{
    const std::vector<std::vector<int>> expected{{11}};
    std::vector<std::vector<int>> actual = pascal_triangle::generate_rows(6);
    std::cout << "result :" << (expected == actual) << std::endl;
    for (auto it = actual.begin(); it != actual.end(); ++it) {
        for(auto& element : *it)
        {
            std::cout << element << std::endl;
        }
    }
   return 0;
}