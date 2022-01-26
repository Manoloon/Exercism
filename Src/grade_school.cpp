//
// Created by Manoloon on 12/12/2021.
//

#include "grade_school.h"
namespace grade_school
{
    school::school() {}

   const std::map <int,std::vector<std::string>> & school::roster() const
    {
        return m_roster;
    }

    void school::add(std::vector<std::string>names,int grade)
    {
        std::vector<std::string> newList;
        for(auto name : names)
        {
            newList.push_back(name);
        }
        m_roster[grade]=newList;
    }

    std::vector<std::string> school::grade(int grade)
    {
        auto i = m_roster.find(grade);
        if(i == m_roster.end())
        {
            return {};
        }
        else
        {
            return m_roster.at(grade);
        }
    }

}
