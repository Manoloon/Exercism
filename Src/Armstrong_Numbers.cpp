//
// Created by Manoloon on 21/02/2022.
//

#include "Armstrong_Numbers.h"
#include <numeric>
#include <vector>
#include <iostream>
namespace armstrong_numbers
{
    bool is_armstrong_number(const int newNumber)
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
        for(auto &&i : Digits)
        {
           std::cout << "Current number is : " << i << std::endl;
           int currentCount = count;
           int PowerNumber = i;
           for(int c=1;c<currentCount;c++)
           {
               PowerNumber = PowerNumber * i;
           }
           i = PowerNumber;
        }
        int sum = std::accumulate(Digits.begin(),Digits.end(),0);
        std::cout << "Current sum is : " << sum<< std::endl;
        return (newNumber == sum);
    }
}