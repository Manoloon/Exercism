//
// Created by Manoloon on 22/1/2024.
//

#ifndef EXERCISM_MATCHING_BRACKETS_H
#define EXERCISM_MATCHING_BRACKETS_H

#include <string_view>
#include <algorithm>
#include <unordered_map>
#include <stack>

namespace matching_brackets {
    bool check(std::string_view input) {
        if (input.empty()) return true;
        std::stack<char> chars;
        std::unordered_map<char, char> brackets = {{'(', ')'},
                                                   {'[', ']'},
                                                   {'{', '}'}};
        for (char c : input) {
            // if found any open bracket
            auto it = std::find_if(std::begin(brackets),std::end(brackets),[&c](const auto& pair){return pair.second == c;});
            if (brackets.find(c) != std::end(brackets)) {
                //-> added to the stack
                chars.push(c);
            }
            else if (it == std::end(brackets)) {
                // ignore other characters and empty spaces
                continue;
            }
            else {
                // if closing brackets have no open bracket
                if (chars.empty() || brackets.at(chars.top()) != c) {
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
