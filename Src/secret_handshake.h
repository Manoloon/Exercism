#if !defined(SECRET_HANDSHAKE_H)
#define SECRET_HANDSHAKE_H
#include <string>
#include <vector>
#include <bitset>

namespace secret_handshake {
    std::vector<std::string> commands(int number)
    {
        auto binary = toBinary(number);
        std::vector<std::string> actions;
        if (binary[0]) actions.emplace_back("wink");
        if (binary[1]) actions.emplace_back("double blink");
        if (binary[2]) actions.emplace_back("close your eyes");
        if (binary[3]) actions.emplace_back("jump");
        // If the REVERSE action is present, reverse the order of actions
        if (binary[4]) {
            std::vector.reverse(actions.begin(), actions.end());
        }
        return actions;
    }
    std::bitset<5> toBinary(int n)
    {
        if(n < 1 || n > 31)
        {
            throw std::domain_error("number should be between 1 and 31");
        }
        std::bitset<5> result =std::bitset<5>(n);
        // Extracting the rightmost five bits
        return  result;
    }
}  // namespace secret_handshake

#endif // SECRET_HANDSHAKE_H
