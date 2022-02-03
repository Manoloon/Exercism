//
// Created by Manoloon on 03/02/2022.
//
/**
 * Convert a binary number, represented as a string (e.g. '101010'), to its decimal equivalent using first principles.
    Implement binary to decimal conversion. Given a binary input string, your program should produce a decimal output.
    The program should handle invalid inputs.
    About Binary (Base-2)

    Decimal is a base-10 system.
    A number 23 in base 10 notation can be understood as a linear combination of powers of 10:
    The rightmost digit gets multiplied by 10^0 = 1
    The next number gets multiplied by 10^1 = 10
    ...
    The nth number gets multiplied by 10^(n-1).
    All these values are summed.

    So: 23 => 2*10^1 + 3*10^0 => 2*10 + 3*1 = 23 base 10
    Binary is similar, but uses powers of 2 rather than powers of 10.
    So: 101 => 1*2^2 + 0*2^1 + 1*2^0 => 1*4 + 0*2 + 1*1 => 4 + 1 => 5 base 10
 */
#ifndef EXERCISM_BINARY_H
#define EXERCISM_BINARY_H
#include <string_view>
#include <string>

namespace binary
{
    int PerfConvert(const std::string_view & toConvert);
    int convert(const std::string & toConvert);
    bool is_digits(const std::string &str);
}

#endif //EXERCISM_BINARY_H

/*
 * REQUIRE(1 == binary::convert("1"));
 * REQUIRE(2 == binary::convert("10"));
 * REQUIRE(3 == binary::convert("11"));
 * REQUIRE(4 == binary::convert("100"));
 * REQUIRE(9 == binary::convert("1001"));
 * REQUIRE(26 == binary::convert("11010"));
 * REQUIRE(1128 == binary::convert("10001101000"));
 * REQUIRE(0 == binary::convert("carrot"));
 * REQUIRE(0 == binary::convert("1100101b"));
 */