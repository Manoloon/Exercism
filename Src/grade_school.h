//
// Created by Manoloon on 12/12/2021.
//

#ifndef EXERCISM_GRADE_SCHOOL_H
#define EXERCISM_GRADE_SCHOOL_H
#include <map>
#include <vector>
#include <string>
using Roster = std::map <int,std::vector<std::string>>;
namespace grade_school
{
    class school
    {
    private:
        Roster m_roster;
    public:
        school();
        void add(std::vector<std::string>names,int grade);
        const std::map <int,std::vector<std::string>> & roster() const;
        std::vector<std::string> grade(int grade);
    };

}


#endif //EXERCISM_GRADE_SCHOOL_H
