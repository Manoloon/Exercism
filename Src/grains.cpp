//
// Created by Manoloon on 01/12/2021.
//

#include "grains.h"

namespace grains
{
    unsigned long long square(int squareIndex)
    {
        unsigned long long count=1;
        for(int i=1;i<squareIndex;i++)
        {
           count *=2;
        }
        return 0ULL +count;
    }

    unsigned long long total()
    {
        // ULL (unsigned long long) -> aca toca el limite de este numero y resta 1 .
        return 0ULL -1;
    }
}