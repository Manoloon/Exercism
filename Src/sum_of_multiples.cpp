//
// Created by Manoloon on 11/02/2022.
//

#include "sum_of_multiples.h"
#include <unordered_set>
#include <numeric>
namespace sum_of_multiples {
    int to(const vec &multipliers,const int N)
    {
        std::unordered_set<int> list;
        int result=0;
        for(int i=1;i<N;i++)
        {
            if(multipliers.x >0)
            {
              int num =  multipliers.x * i;
              if(num<N)
              {
                  list.insert(num);
              }
            }
            if(multipliers.y >0)
            {
                int num =  multipliers.y * i;
                if(num<N)
                {
                    list.insert(num);
                }
            }
            if(multipliers.z >0)
            {
                int num =  multipliers.z * i;
                if(num<N)
                {
                    list.insert(num);
                }
            }
        }
        return std::accumulate(list.begin(),list.end(),0);
    }
}