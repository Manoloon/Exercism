#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include<unordered_set>
#include<unordered_map>
#include<utility>

namespace allergies {
class allergy_test{
    public:
    allergy_test(int _score):score(_score){
    }

    bool is_allergic_to(const std::string& allergy){
        const auto& it = allergiesMap.find(allergy);
        if(it != allergiesMap.end() && it->second <= score){
            score -=it->second;
            return true; 
        }
          return false;     
    }
    std::unordered_set<std::string> get_allergies() {
        if(score == 0){
            return {};
        }
        std::unordered_set<std::string> allergiesNames;
        for(const auto& it : allergiesMap){
            if(score >= it.second){
                allergiesNames.emplace(it.first);
                score -= it.second;
            }           
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