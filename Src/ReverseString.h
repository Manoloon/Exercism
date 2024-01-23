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
    // this is a code interview way of resolve this.
    std::string rev_string(std::string newString){
        if(newString.empty()) return "";
        for(int i =0; i < newString.length()/2; i++){
            std::swap(newString[i],newString[newString.length()-i-1]);
        }
        return newString;
    }
}  // namespace reverse_string

#endif // REVERSE_STRING_H