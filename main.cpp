#include <iostream>
#include "Src/grade_school.h"
#include <string>
#include <limits>

int main()
{
    grade_school::school School;
    School.add({"Aime","Pablo","Otro"},2);
    const std::map<int, std::vector<std::string>> expected{{2, {"Aime","Pablo","Otro"}}};
    if(School.roster() == expected)
    {
        std::cout << "great\n";
    }
    else
    {
        std::cout << "buuuu\n";
    }
    for(auto names : School.grade(1))
    {
        std::cout << names << std::endl;
    }

   return 0;
}
