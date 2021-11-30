#include <iostream>
#include "Src/Triangles.h"
#include <string>

int main()
{
    bool result (triangle::flavor::equilateral == triangle::kind(10,0,1));
    std::cout << result;
    return 0;
}
