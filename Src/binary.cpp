//
// Created by Manoloon on 03/02/2022.
//

#include "binary.h"
#include <charconv>
#include <iostream>
#include <sstream>

namespace binary
{
    int convert(const std::string & toConvert)
    {
        if(!is_digits(toConvert))
        {
            throw std::invalid_argument("not a digit");
            return 0;
        }
        std::stringstream intString(toConvert);
        size_t integer;
        intString >> integer;
        size_t decimal = 0, base = 1, remainder;

        while (integer>0)
        {
            remainder = integer % 10;
            decimal += remainder * base;
            base = base *2;
            integer /= 10;
        }
        return decimal;
    }

    bool is_digits(const std::string &str)
    {
        return str.find_first_not_of("0123456789") == std::string::npos;
    }

    int PerfConvert(const std::string_view &toConvert)
    {
        int number;
        auto toInt = std::from_chars(toConvert.data(), toConvert.data() + toConvert.size(), number,2);
        if (toInt.ec == std::errc::invalid_argument)
        {
            std::cout << "Could not convert.\n";
        }
        return number;

    }
}