//
// Created by Manoloon on 08/03/2022.
//
/**
 * Instructions
 * Given a number n, determine what the nth prime is.
   By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
   If your language provides methods in the standard library to deal with prime numbers,
   pretend they don't exist and implement them yourself.
 */
#include "nth_prime.h"
#include <stdexcept>
namespace nth_prime
{
    bool isPrime(int number)
    {
        int counter = 0;
        for (int j = 2; j < number; j++)
        {
            if (number % j == 0)
            {
                counter = 1;
                break;
            }
        }
        if (counter == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int nth(int number)
    {
        if(number==0){throw std::domain_error ("input is 0");}
        int BestNumber = 0;
        int num = 2;
        int count = 1;
        //count 6th prime.
        while (count<=number)
        {
            if (isPrime(num))
            {
                BestNumber = num;
                count++;
            }
                num++;
        }
        return BestNumber;
    }
}