//
// Created by Manoloon on 04/02/2022.
// Using C++ ver 17.0
//
/**
 * Convert a hexadecimal number, represented as a string (e.g. "10af8c"), to its decimal equivalent using first principles
 * (i.e. no, you may not use built-in or external libraries to accomplish the conversion).
 * On the web we use hexadecimal to represent colors, e.g. green: 008000, teal: 008080, navy: 000080).
 * The program should handle invalid hexadecimal strings.
 */
#ifndef EXERCISM_HEXADECIMAL_H
#define EXERCISM_HEXADECIMAL_H
#include <string_view>

namespace hexadecimal
{
    unsigned int convert(const std::string_view & toConvert);
    bool is_valid(const std::string_view &str);
}

#endif //EXERCISM_HEXADECIMAL_H
/*
 * REQUIRE(0x1 == hexadecimal::convert("1"));
 * REQUIRE(0xc == hexadecimal::convert("c"));
 * REQUIRE(0x10 == hexadecimal::convert("10"));
 * REQUIRE(0xaf == hexadecimal::convert("af"));
 * REQUIRE(0x100 == hexadecimal::convert("100"));
 * REQUIRE(0x19ace == hexadecimal::convert("19ace"));
 * REQUIRE(0 == hexadecimal::convert("carrot"));
 * REQUIRE(0x000000 == hexadecimal::convert("000000"));
 * REQUIRE(0xffffff == hexadecimal::convert("ffffff"));
 * REQUIRE(0xffff00 == hexadecimal::convert("ffff00"));
 */
