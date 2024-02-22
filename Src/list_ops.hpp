/*
Instructions

Implement basic list operations.

In functional languages list operations like length, map, and reduce are very common. Implement a series of basic list operations, without using existing functions.

The precise number and names of the operations to be implemented will be track dependent to avoid conflicts with existing names, but the general operations you will implement include:

    append (given two lists, add all items in the second list to the end of the first list);
    concatenate (given a series of lists, combine all items in all lists into one flattened list);
    filter (given a predicate and a list, return the list of all items for which predicate(item) is True);
    length (given a list, return the total number of items within it);
    map (given a function and a list, return the list of the results of applying function(item) on all items);
    foldl (given a function, a list, and initial accumulator, fold (reduce) each item into the accumulator from the left);
    foldr (given a function, a list, and an initial accumulator, fold (reduce) each item into the accumulator from the right);
    reverse (given a list, return a list with all the original items, but in reversed order).

Note, the ordering in which arguments are passed to the fold functions (foldl, foldr) is significant.
*/
#pragma once
#include <vector>
#include <numeric>
#include <algorithm>

namespace list_ops {
    template<typename T>
    std::vector<T> append(std::vector<T> list1, std::vector<T> list2){
        for(T e : list2){
            list1.emplace_back(e);
        }
        return list1;
    }

    template<typename T>
    std::vector<T> concat(const std::vector<std::vector<T>>& lists){
        if(lists.empty()) return {};
        std::vector<T> result;
        result.reserve(lists.size());
        for(auto l : lists){
            result.insert(std::end(result),std::begin(l),std::end(l));
        }
        return result;
    }

    template<typename T, typename Predicate>
    std::vector<T> filter(std::vector<T> list,const Predicate& predicate){
        if(list.empty()) std::vector<T>{};
        std::vector<T> filtered;
        filtered.reserve(list.size());
        std::copy_if(std::begin(list),std::end(list),std::back_inserter(filtered),predicate);
        return filtered;
    }

    template<typename T>
    int length(std::vector<T> list) {
        if(list.empty()){return 0;}
        std::vector<T> tail(std::begin(list)+1,std::end(list));
        return 1 + length(tail); 
    }

    template<typename T, typename Func>
    std::vector<T> map(std::vector<T> list,const Func& func){
        std::vector<T> mapped;
        for(auto e : list){
            mapped.emplace_back(func(e));
        }
        return mapped;
    }

    template<typename T, typename Func>
    T foldl(std::vector<T> list,T acc,const Func& func){
        T accumulator = acc;
        for(auto e : list){
            accumulator = func(accumulator,e);
        }
        return accumulator;
    }

    template<typename T, typename Func>
    T foldr(std::vector<T> list,T acc,const Func& func){
        T accumulator = acc;
        for(size_t i = list.size(); i != SIZE_MAX; --i){
            accumulator = func(accumulator,list[i-1]);
        }
        return accumulator;
    }

    template<typename T>
    std::vector<T> reverse(const std::vector<T>& lists){
            // Flatten the vector of vectors into a single vector
        std::vector<T> flattened = lists;
        // Reverse the flattened vector
        std::reverse(flattened.begin(), flattened.end());
    
        return flattened;
    }
}  // namespace list_ops