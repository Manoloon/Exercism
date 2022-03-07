//
// Created by Manoloon on 07/03/2022.
//

#include "binary_search.h"
#include <stdexcept>
namespace binary_search
{
    std::size_t find(const std::vector<int> & data, int item)
    {
        if(data.empty()){throw std::domain_error("item not found");}
        auto const half_size = (int) data.size() / 2;
        // item could be in the first half
        int i = 0;
        for (auto it = data.begin(); it <= data.begin() + half_size; ++it, ++i) {
            if (*it == item) {
                return i;
            }
        }
        i = half_size;
        for (auto it = data.begin() + half_size; it <= data.end(); ++it, ++i) {
            if (*it == item) {
                return i;
            }
        }
        throw std::domain_error("item not found");
    }

    std::size_t findSimple(std::vector<int> data, int item)
    {
        //std::vector<int>::iterator it;
        int i = 0;  // counter.
        for (auto it = data.begin(); it <= data.end(); ++it, ++i) {
            if (*it == item) {
                return i;
            }
        }
        throw std::domain_error("item not found");
    }

    std::size_t findSorted(std::vector<int> data, int item)
    {
        // sort the data ascendant
        std::sort(data.begin(),data.end());
        auto const half_size = (int)data.size() / 2;
        // item could be in the first half
        int i = 0;
        if(item <= data.at(half_size))
        {
            for(auto it = data.begin(); it <= data.begin()+half_size; ++it,++i)
            {
                if(*it == item)
                {
                    return i;
                }
            }
            throw std::domain_error("item not found");
        }
        else
        {
            i = half_size;
            for(auto it = data.begin()+half_size; it <= data.end(); ++it,++i)
            {
                if(*it == item)
                {
                    return i;
                }
            }
            throw std::domain_error("item not found");
        }
    }
}