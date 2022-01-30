//
// Created by Manoloon on 12/12/2021.
//

#ifndef EXERCISM_GRADE_SCHOOL_H
#define EXERCISM_GRADE_SCHOOL_H
#include <map>
#include <vector>
#include <string>

namespace grade_school
{
    class school
    {
        using Roster = std::map <int,std::vector<std::string>>;
    private:
        Roster m_roster;
    public:
 //       void add(std::vector<std::string>names,int grade);
        void add(const std::string & name, const int grade);
        const std::map <int,std::vector<std::string>> & roster() const;
        const std::vector<std::string> & grade(int grade) const;
    };
}
#endif //EXERCISM_GRADE_SCHOOL_H
