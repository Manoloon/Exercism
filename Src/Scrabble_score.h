#if !defined(SCRABBLE_SCORE_H)
#define SCRABBLE_SCORE_H

#include <vector>
#include <string>
#include <unordered_map>

namespace scrabble_score {
    std::unordered_map<char, int> Values{
            {'A', 1},
            {'E', 1},
            {'I', 1},
            {'O', 1},
            {'U', 1},
            {'L', 1},
            {'N', 1},
            {'R', 1},
            {'S', 1},
            {'T', 1},
            {'D', 2},
            {'G', 2},
            {'B', 3},
            {'C', 3},
            {'M', 3},
            {'P', 3},
            {'F', 4},
            {'H', 4},
            {'V', 4},
            {'W', 4},
            {'Y', 4},
            {'K', 5},
            {'J', 8},
            {'X', 8},
            {'Q', 10},
            {'Z', 10}
    };

    int score(const std::string &word) {
        int score = 0;
        for (const auto &c: word) {
            const auto &cUpper = std::toupper(c);
            if (const auto &it = Values.find(cUpper);it != std::end(Values)) {
                score += it->second;
            }
        }
        return score;
    }
}  // namespace scrabble_score

#endif // SCRABBLE_SCORE_H