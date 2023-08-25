#if !defined(SECRET_HANDSHAKE_H)
#define SECRET_HANDSHAKE_H
#include <string>
#include <vector>
#include <bitset>
#include <stdexcept>
#include <algorithm>

namespace secret_handshake
{
    std::bitset<5> toBinary(int n)
    {
        if(n < 1 || n > 31)
        {
            throw std::domain_error("number should be between 1 and 31");
        }
        return {static_cast<unsigned long long>(n)};
    }

    std::vector<std::string> commands(int number)
    {
        std::bitset<5> binary = toBinary(number);
        std::vector<std::string> actions;
        if (binary[0]) actions.emplace_back("wink");
        if (binary[1]) actions.emplace_back("double blink");
        if (binary[2]) actions.emplace_back("close your eyes");
        if (binary[3]) actions.emplace_back("jump");

        if (binary[4]) std::ranges::reverse(actions.begin(),actions.end());
        return actions;
    }
}  // namespace secret_handshake

#endif //SECRET_HANDSHAKE_H