#include <iostream>
#include "Src/grade_school.h"
#include <string>
#include <limits>

int main()
{
    grade_school::school School;
    School.add({"Zabro","Pablo","Aime"},2);
    School.add("Chelsea", 3);
    School.add("Logan", 7);
    School.add("Carlete",2);
    const std::map<int, std::vector<std::string>> expected{{2, {"Aime","Pablo","Otro"}}};
    if(School.roster() == expected)
    {
        std::cout << "great\n";
    }
    else
    {
        std::cout << "buuuu\n";
    }
    for(auto names : School.grade(2))
    {
        std::cout << names << std::endl;
    }
    for(auto i : School.roster())
    {
        for(auto v : School.grade(i.first))
        {
            std::cout << i.first << " : " << v << std::endl;
        }

    }
   return 0;
}
