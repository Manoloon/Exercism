//
// Created by Manoloon on 05/12/2021.
//

#include "Raindrops.h"
#include <string>

namespace raindrops
{
    std::string convert(int newNumber)
    {
        std::string result;
        for(const auto& [factor,string] : Factors)
        {
            if(newNumber%factor==0)
            {
                result +=string;
            }
        }
        return (result.empty()) ? std::to_string(newNumber) : result;
    }
}

