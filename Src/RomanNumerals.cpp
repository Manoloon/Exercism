//
// Created by Manoloon on 11/04/2022.
//
#include "RomanNumerals.h"
#include <vector>
#include <stdexcept>
namespace roman_numerals
{
    std::string convert(int n)
    {
        if (n < 1 || n > 3000)  throw std::invalid_argument("Number out of limits");
        const std::vector<std::string> Unit{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        const std::vector<std::string> Tens{"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        const std::vector<std::string> Hundred{"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        const std::vector<std::string> Thousand{"","M","MM","MMM"};
        return Thousand[n/1000] + Hundred[(n%1000)/100] + Tens[(n%100)/10] + Unit[n%10];
    }
}


