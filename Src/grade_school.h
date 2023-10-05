//
// Created by Manoloon on 12/12/2021.
//school::add() takes its first argument by value but does not modify it.
//F.16 of the C++ Core Guidelines says: "For “in” parameters, pass cheaply-copied types by value and others by reference to const"
// In small examples like this you will not notice any difference, but if a copy is very expensive or if a function is called often avoiding the copy can be significantly more efficient.

//add() handles two distinct cases: One where grade already exists in m_roster, one where it does not.
//The code would become simpler if you'd only have to handle a single case. Here's something interesting about the std::map::operator[].
// It inserts a new value-initialized element (in this case an empty std::vector) if there is no matching entry.
// That modifying nature of std::map::operator[] is a surprise to many programmers coming from other languages.
// That means you could store a reference to all_student[grade] in a local variable and then use that variable in the rest of the function.
// That would shorten the code, make it simpler and IMHO easier to read.
#ifndef EXERCISM_GRADE_SCHOOL_H
#define EXERCISM_GRADE_SCHOOL_H

#include <map>
#include <vector>
#include <string>
#include <algorithm>

namespace grade_school
{
    class school
    {
        using Roster = std::map<int, std::vector<std::string>>;
        Roster m_roster;

    public:
        //       void add(std::vector<std::string>names,int grade);
        void add(const std::string &name, const int grade)
        {
            // no need a copy of the map.
            auto &allStudentOfGrade = m_roster[grade];
            auto upperIt = std::ranges::upper_bound(allStudentOfGrade.begin(),
                                                    allStudentOfGrade.end(),name);
            allStudentOfGrade.insert(upperIt, name);
        };

        [[nodiscard]]
        const Roster &roster() const
        {
            return m_roster;
        };

        [[nodiscard]]
        const std::vector<std::string> &grade(int grade) const
        {
            auto const i = m_roster.find(grade);
            static std::vector<std::string> emptyNameList;
            if (i == m_roster.end())
            {
                return emptyNameList;
            }
            else
            {
                //But there's a more efficient alternative. Take a look at line 27 and let me know if you need another hint.
                return i->second;
            }
        };
    };
}
#endif //EXERCISM_GRADE_SCHOOL_H
