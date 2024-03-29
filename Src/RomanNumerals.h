//
// Created by Manoloon on 11/04/2022.
//
/**
 * Instructions
Write a function to convert from normal numbers to Roman Numerals.
The Romans were a clever bunch. They conquered most of Europe and ruled it for hundreds of years.
 They invented concrete and straight roads and even bikinis. One thing they never discovered though was the number zero.
 This made writing and dating extensive histories of their exploits slightly more challenging, but the system of numbers
 they came up with is still in use today. For example the BBC uses Roman numerals to date their programmes.

The Romans wrote numbers using letters - I, V, X, L, C, D, M. (notice these letters have lots of straight
 lines and are hence easy to hack into stone tablets).
 1  => I
10  => X
 7  => VII
There is no need to be able to convert numbers larger than about 3000. (The Romans themselves didn't tend to go any higher)
Wikipedia says: Modern Roman numerals ...
are written by expressing each digit separately starting with the left most digit and skipping any digit with a value of zero.
To see this in practice, consider the example of 1990.
In Roman numerals 1990 is MCMXC:
1000=M 900=CM 90=XC
2008 is written as MMVIII:
2000=MM 8=VIII
Review 2024 : update the limit to 4000 .
 */
#ifndef EXERCISM_ROMANNUMERALS_H
#define EXERCISM_ROMANNUMERALS_H
#include <array>
#include <stdexcept>
#include <string>

namespace roman_numerals {
    std::string convert(int n) {
        if (n < 1 || n > 3999) throw std::invalid_argument("Number out of limits");
        const std::array<std::string,10> Unit{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        const std::array<std::string,10> Tens{"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        const std::array<std::string,10> Hundred{"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        const std::array<std::string,4> Thousand{"", "M", "MM", "MMM"};
        return Thousand[n / 1000] + Hundred[(n % 1000) / 100] + Tens[(n % 100) / 10] + Unit[n % 10];
    }
}
#endif //EXERCISM_ROMANNUMERALS_H
