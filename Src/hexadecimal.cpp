//
// Created by Manoloon on 04/02/2022.
//

#include "hexadecimal.h"
#include <charconv>
#include <iostream>
#include <sstream>

namespace hexadecimal
{
    std::string convert(const std::string & toConvert)
    {
        std::stringstream ss;
        if(!is_valid(toConvert))
        {
            throw std::invalid_argument("not an Hexadecimal number");
        }
        for(const auto &i : toConvert)
        {
            ss << std::hex << i;
        }
        std::string result = ss.str();
        return "0x"+result;
    }

    bool is_valid(const std::string &str)
    {
        return str.find_first_not_of("0123456789abcdef") == std::string::npos;
    }

    int PerfConvert(const std::string_view &toConvert)
    {
        int number;
        auto toInt = std::from_chars(toConvert.data(), toConvert.data() + toConvert.size(), number,16);
        if (toInt.ec == std::errc::invalid_argument)
        {
            std::cout << "Could not convert.\n";
            return 0;
        }
        return number;
    }
}