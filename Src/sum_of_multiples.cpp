//
// Created by Manoloon on 11/02/2022.
//

#include "sum_of_multiples.h"
#include <unordered_set>
#include <numeric>
namespace sum_of_multiples {
    int to(const std::vector<int> &multipliers,const int N)
    {
        std::unordered_set<int> list;
        for(int i=1;i<N;i++)
        {
            for(auto j: multipliers)
            {
                if(j>0)
                {
                    int num =  j * i;
                    if(num<N)
                    {
                        list.insert(num);
                    }
                }
            }
        }
        return std::accumulate(list.begin(),list.end(),0);
    }
}