#if !defined(SCRABBLE_SCORE_H)
#define SCRABBLE_SCORE_H
#include <vector>
#include <string>
#include <unordered_map>

namespace scrabble_score {
std::unordered_map<std::string ,int> Values{
    {"AEIOULNRST",1},
    {"DG",        2},
    {"BCMP",      3},
    {"FHVWY",     4},
    {"K",         5},
    {"JX",        8},
    {"Q",         10}
};
int score(std::string word){

    int score=0;
    for(const auto& c : word){
        auto cUpper = std::toupper(c);
        if(Values.find(cUpper) != std::string::npos){
            auto it = Values.find(c);
            score += Values.at(it).second;
        }
    }
    return score;
}
}  // namespace scrabble_score

#endif // SCRABBLE_SCORE_H