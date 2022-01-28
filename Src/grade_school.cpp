//
// Created by Manoloon on 12/12/2021.
//

#include "grade_school.h"
#include <algorithm>

namespace grade_school
{
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

    std::vector<std::string> school::grade(int grade) const
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

    void school::add(std::string name, int grade)
    {
        if(m_roster.find(grade) == m_roster.end())
        {
           m_roster[grade] = {name};
        }
        else
        {
           m_roster[grade].push_back(name);
           std::sort(m_roster[grade].begin(),m_roster[grade].end());
        }
    }
}
