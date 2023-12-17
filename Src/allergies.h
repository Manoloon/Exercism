//
// Created by pablo on 17/12/2023.
//
#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include<unordered_set>
#include<unordered_map>
#include<utility>

namespace allergies {
    class allergy_test{
    public:
        explicit allergy_test(int _score):score(_score){}
        bool is_allergic_to(const std::string& allergy){
            const auto& it = allergiesMap.find(allergy);
            return it != allergiesMap.end() && it->second <= score;
        }
        std::unordered_set<std::string> get_allergies() const {
            std::unordered_set<std::string> allergiesNames;
            for(const auto& it : allergiesMap){
                allergiesNames.emplace(it.first);
            }
            return allergiesNames;
        }
    private:
        int score;
        std::unordered_map<std::string,int> allergiesMap{
                {"eggs",1},{"peanuts",2},{"shellfish",4},
                {"strawberries",8},{"tomatoes",16},{"chocolate",32},
                {"pollen",64},{"cats",128}};
    };
}  // namespace allergies

#endif // ALLERGIES_H
