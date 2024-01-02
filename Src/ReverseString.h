#include <string>
#include <algorithm>

#if !defined(REVERSE_STRING_H)
#define REVERSE_STRING_H

namespace reverse_string {
    std::string reverse_string(std::string newString)
    {
        std::reverse(newString.begin(), newString.end());
        return newString;
    }
}  // namespace reverse_string

#endif // REVERSE_STRING_H