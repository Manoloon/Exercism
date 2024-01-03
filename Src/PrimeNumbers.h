//
// Created by Manoloon on 3/1/2024.
//
/*
 * find the first 25 prime numbers
 * A prime number is a number that can only be divided by itself and 1 without remainders.
 * 2,3,5,7,11,13,17,19,23,29,
 * 31,37,41,43,47,53,59,61,67,71,
 * 73,79,83,89,97
 * */
#ifndef EXERCISM_PRIMENUMBERS_H
#define EXERCISM_PRIMENUMBERS_H

#include <cmath>

namespace PrimeNumbers {
    bool isPrime(int n) {
        // find the square root of the number
        const int root = std::sqrt(n + 1);
        // find all the prime n smaller than the square root
        for (int i = 2; i <= root; i++) {
            // if the number is not div by any of these prime numbers
            if (n % i == 0) return false;
        }
        // then the number is prime
        return true;
    }

    void printFirst(int n) {
        int count = 1;
        int number = 2;
        while (count <= n) {
            if (isPrime(number)) {
                std::cout << number << ", ";
                count++;
            }
            number++;
        }
    }
}
#endif //EXERCISM_PRIMENUMBERS_H
