//
// Created by Manoloon on 22/1/2024.
//

#ifndef EXERCISM_MATCHING_BRACKETS_H
#define EXERCISM_MATCHING_BRACKETS_H

#include <string_view>
#include <unordered_map>
#include <stack>

namespace matching_brackets {
    bool check(std::string_view input) {
        if (input.empty()) return true;

        std::stack<char> chars;
        std::unordered_map<char,int> closeBrackets = {{')',1},
                                                      {']',2},
                                                      {'}',3}};
        std::unordered_map<char, char> brackets = {{'(', ')'},
                                                   {'[', ']'},
                                                   {'{', '}'}};
        for (char c : input) {
            // if found any open bracket
            if (brackets.find(c) != std::end(brackets)) {
                //-> added to the stack
                chars.push(c);
            }
            else if (brackets.find(c) != std::end(brackets) || closeBrackets.find(c) == std::end(closeBrackets)) {
                // ignore other characters and empty spaces
                continue;
            }
            else {
                // if closing brackets have no open bracket
                if (chars.empty() || brackets[chars.top()] != c) {
                    return false;
                }
                chars.pop();
            }
        }
        // check if there is any unmatched bracket
        return chars.empty();
    }
}  // namespace matching_brackets
#endif //EXERCISM_MATCHING_BRACKETS_H
