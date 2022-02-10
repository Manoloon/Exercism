//
// Created by Manoloon on 04/02/2022.
//
#include "hexadecimal.h"
#include <algorithm>
#include <numeric>

namespace hexadecimal
{
    unsigned int convert(const std::string_view & toConvert)
    {
        if(!is_valid(toConvert))
        {
            return 0;
        }
        return std::accumulate(toConvert.begin(),toConvert.end(), 0,
                               [](auto acc, char c)
                               {
                                    acc *= 16;
                                    if('a' <= c && c <= 'f')
                                        return acc + c - 'a' + 10;
                                    if('A' <= c && c <= 'F')
                                        return acc + c - 'A' + 10;
                                    return acc + c - '0';
                               });
    }

    bool is_valid(const std::string_view &str)
    {
        return str.find_first_not_of("0123456789abcdef") == std::string_view::npos;
    }
}