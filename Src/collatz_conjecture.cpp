//
// Created by Manoloon on 02/02/2022.
//
#include "collatz_conjecture.h"
#include <stdexcept>
#include <iostream>

namespace collatz_conjecture
{
    void checkNumberIsValid(int num)
    {
        if(num ==0) {
            throw std::invalid_argument("zero_is_an_error");
        }
        else if(num<0) {
            throw std::invalid_argument("negative_value_is_an_error");
        }
    }

    int steps(const int number) {
    try {
            checkNumberIsValid(number); //exception
        }
    catch (std::invalid_argument &e) {
            std::cerr << e.what() << std::endl;
            return -1;
        }

        int result = number;
        int steps = 0;
        while (result != 1) {
            // its even
            if (result % 2 == 0) {
                result = result / 2;
            } else {
                result = 3 * result + 1;
            }
            steps++;
        }
        return steps;
    }
}
