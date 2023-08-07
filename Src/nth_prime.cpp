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
#include <cmath>
namespace nth_prime
{
    bool isPrime(int number){
            const int Higher = std::sqrt(number+1);
            for(int i=2;i<=Higher;++i)
            {
                if(number%i==0){return false;}
            }
        return true;
        }
    bool isPrimePerf(int n)
    {
        const int max_cand = std::sqrt(n+1);
        for(int i=2;i<=max_cand;++i)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }

    // turn out that this is 1 ms more faster /
    int nthSimple(int number){
        if(number<1){throw std::domain_error ("input is 0");}
        int BestNumber = 0;
        int num = 2;
        int count = 1;
        //count 6th prime.
        while (count<=number){
            if (isPrime(num)){
                BestNumber = num;
                count++;
            }
                num++;
        }
        return BestNumber;
    }

    int nth(int number)
    {
        if(number<1){throw std::domain_error ("input is 0");}
        // as counter
        for (int i = 2; ; ++i) {
            if (isPrimePerf(i) && (--number == 0)) {
                return i;
            }
        }
    }
}