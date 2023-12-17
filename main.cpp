#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "Src/allergies.h"

int main()
{
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
    }
   return 0;
}