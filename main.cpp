#include <iostream>
#include <memory>
#include <string>
#include "Src/list_ops.hpp"

int main()
{
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
    /*
   bool result = matching_brackets::check("(((185 + 223.85) * 15) - 543)/2");
   std::cout << "The brackets are " << (result ? "valid" : "invalid");

   PrimeNumbers::printFirst(100);

   std::cout << roman_numerals::convert(3999);
   std::cout << trinary::to_decimal("carrot");
   allergies::allergy_test score2(248);
   const std::unordered_set<std::string> lots_of_stuff = {"strawberries", "tomatoes", "chocolate", "pollen", "cats"};
   std::unordered_set<std::string> score2Allergies = score2.get_allergies();
   for(auto i : score2Allergies){
       std::cout <<  i << ", ";
   }
   std::cout << std::endl;
   std::cout << " Require this test16: " << std::endl;
   for(auto i : lots_of_stuff){
       std::cout <<  i << ", ";
   }
   std::cout << std::endl;
   const std::unordered_set<std::string> non_allergen = {"eggs", "shellfish", "strawberries", "tomatoes",
                                                         "chocolate", "pollen", "cats"};
   allergies::allergy_test score3(509);
   std::unordered_set<std::string> score3Allergies = score3.get_allergies();
   for(auto i : score3Allergies){
       std::cout <<  i << ", ";
   }
   std::cout << std::endl;
   std::cout << " Require this Test18: " << std::endl;
   for(auto i : non_allergen){
       std::cout <<  i << ", ";
   }*/
   return 0;
}