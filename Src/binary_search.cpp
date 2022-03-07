//
// Created by Manoloon on 07/03/2022.
//

#include "binary_search.h"
#include <stdexcept>
namespace binary_search
{
    size_t find(std::vector<int> data, int item)
    {
        // sort the data ascendent
        //std::sort(data.begin(), data.end());
        //int dataSize = data.size()/2;
        std::vector<int>::iterator it;
        int i = 0;  // counter.

// now start at from the beginning
// and keep iterating over the element till you find
// nth element...or reach the end of vector.
        for(it = data.begin(); it != data.end(); it++,i++ )
        {
            if(*it == item)
            {
                return i;
            }
        }
        // divide data in two list
        // if the item is < than the last item of the first list -> search there.
        // else search in the second list.
        //if found return its position.
        throw std::domain_error("item not found");
        return 0;
    }
}