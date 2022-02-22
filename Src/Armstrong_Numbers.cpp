//
// Created by Manoloon on 21/02/2022.
//

#include "Armstrong_Numbers.h"
#include <numeric>
#include <vector>
#include <iostream>
namespace armstrong_numbers
{
    bool is_armstrong_number(int newNumber)
    {
        if(newNumber <10)
        {
            return true;
        }
        int number = newNumber;
        std::vector<int>Digits;
        int count =0;
        while (number > 0)
        {
            int digit = number%10;
            number /= 10;
            Digits.push_back(digit);
            count++;
        }
        std::vector<int>PowerDigits;
        for(auto i : Digits)
        {
           std::cout << "Current number is : " << i << std::endl;
           int currentCount = count;
           int cNumb = i;
           for(int c=1;c<currentCount;c++)
           {
                cNumb = cNumb * i;
           }
            PowerDigits.push_back(cNumb);
        }
        int sum = std::accumulate(PowerDigits.begin(),PowerDigits.end(),0);
        return (newNumber == sum);
    }
}