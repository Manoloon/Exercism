#include <iostream>
#include <string>
#include <limits>
#include "Src/grade_school.h"

int main()
{
    grade_school::school school_;
    school_.add("Franklin", 5);
    school_.add("Bradley", 5);
    school_.add("Jeff", 1);
    school_.add("ALeph", 1);
    school_.add("Zion", 2);
    const auto actual = school_.grade(5);
    const std::vector<std::string> expected{"Bradley", "Franklin"};

    for(auto i : school_.roster())
    {
        for(auto v : school_.grade(i.first))
        {
            std::cout << i.first << " : " << v << std::endl;
        }
    }
   return 0;
}
