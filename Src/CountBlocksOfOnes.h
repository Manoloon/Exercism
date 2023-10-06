//
// Created by Manoloon on 6/10/2023.
//

#ifndef EXERCISM_COUNTBLOCKSOFONES_H
#define EXERCISM_COUNTBLOCKSOFONES_H
#include <iostream>
#include <string_view>

int CountBlockOfOnes(std::string_view sequence)
{
    if(sequence.length() <=0)
    {
        return -1;
    }

    int counter=0;
    for(int c =0;c<sequence.length();++c)
    {
         if(sequence[c] == '1' && ( c == 0 || sequence.at(c-1) == '0'))
         {
             counter++;
         }
    }
    return counter;
}
#endif //EXERCISM_COUNTBLOCKSOFONES_H