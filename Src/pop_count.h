//
// Created by Manoloon on 4/1/2024.
//
/*
 * Chicken Coop:
 _ _ _ _ _ _ _
|E| |E|E| | |E|

Resulting Binary:
 1 0 1 1 0 0 1

Decimal number on the display:
89

Actual eggs in the coop:
4
 * */
#ifndef EXERCISM_POP_COUNT_H
#define EXERCISM_POP_COUNT_H
#pragma once
namespace chicken_coop {
    int positions_to_quantity(int n) {
        if (n == 0)return 0;
        int count = 0;
        while (n > 0) {
            if (n % 2 == 1) count++;
            n = n / 2;
        }
        return count;
    }

}  // namespace chicken_coop

#endif //EXERCISM_POP_COUNT_H
