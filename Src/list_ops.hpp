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
#include <iostream>
#include <algorithm>

namespace list_ops {
    template<typename T>
    std::vector<T> append(std::vector<T>& list1, std::vector<T>& list2){
        for(const auto& e : list2){
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
    size_t length(std::vector<T> list) {
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
        if(list.size() == 0) return acc;
        T head = list[0];
        std::vector<T> tail(std::begin(list)+1,std::end(list));
        return foldl(tail,func(acc,head),func);     
    }

    template<typename T, typename Func>
    T foldr(std::vector<T> list,T acc,const Func& func){
        if(list.size() == 0) return acc;
        T head = list[0];
        std::vector<T> tail(std::begin(list)+1,std::end(list));
        return func(foldr(tail,acc,func),head);
    }

    template<typename T>
    std::vector<T> reverse(const std::vector<T>& list){
        if(list.empty()) return {};
        // Flatten the vector of vectors into a single vector
        std::vector<T> flattened = list;
        // Reverse the flattened vector
        std::reverse(flattened.begin(), flattened.end());
        return flattened;
    }

    void TestSolution()
{
    std::cout << "LIST OPS : TEST SOLUTION\n";

    std::vector<int> list = {1,2,3,4};
    std::vector<int> Emptylist = {};
    std::vector<int> list2 = {5,6,7,8};
    std::cout << "Length : " << list_ops::length(list) << std::endl;
    std::vector<int> input{1, 3, 5, 7};
    auto append = list_ops::append(Emptylist,list2);
    std::cout << "append : " << std::endl;
    for(auto i : append){
        std::cout << i;
    }
    std::cout << std::endl;

    std::vector<std::vector<int>> lists{{1, 2}, {3}, {}, {4, 5, 6}};
    auto concat = list_ops::concat(lists);
    std::cout << "concat : " << std::endl;
    for(auto i : concat){
        std::cout << i;
    }
    std::cout << std::endl;

	auto lambda_func = [] (int x) { return x + 1;};
	auto result = list_ops::map(input, lambda_func);
    std::cout << "map : " << std::endl;
    for(auto i : result){
        std::cout << i;
    }
    std::cout << std::endl;

	auto filter_func = [] (int x) { return x % 2 == 1;};
	auto filterRes {list_ops::filter(list, filter_func)};
    std::cout << "filter : " << std::endl;
    for(auto i : filterRes){
        std::cout << i;
    }
    std::cout << std::endl;

    auto foldl_func = [] (int x, int y) { return x + y;};
	auto foldl_res {list_ops::foldl(list, 5, foldl_func)};
    std::cout << "foldl : " << std::endl;
    std::cout << foldl_res;
    std::cout << std::endl;

    auto foldr_func = [] (int acc, int el) { return el + acc;};
    std::vector<double> floatlist{1.0, 2.0, 3.0, 4.0};
	auto foldr_floatRes = [] (double acc, double el) { return el / acc;};
    auto foldr_res {list_ops::foldr(floatlist, 24.0, foldr_floatRes)};
    std::cout << "foldr : " << std::endl;
    std::cout << foldr_res;
    std::cout << std::endl;

    std::vector<int> emptylist{};
	auto revers {list_ops::reverse(lists)};
    std::cout << "reverse : " << std::endl;
    // for(auto i : revers){
    //     std::cout << i;
    // }
    std::cout << std::endl;
}
}  // namespace list_ops