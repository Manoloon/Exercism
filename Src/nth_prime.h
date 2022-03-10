//
// Created by Manoloon on 08/03/2022.
//

#ifndef EXERCISM_NTH_PRIME_H
#define EXERCISM_NTH_PRIME_H


namespace nth_prime
{
    int nthSimple(int number);
    int nth(int number);
}
/**
 * REQUIRE(3 == nth_prime::nth(2));
 * REQUIRE(13 == nth_prime::nth(6));
 * REQUIRE(104743 == nth_prime::nth(10001));
 * REQUIRE_THROWS_AS(nth_prime::nth(0), std::domain_error);
 */

#endif //EXERCISM_NTH_PRIME_H
