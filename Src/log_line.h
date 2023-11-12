#ifndef EXERCISM_LOG_LINE_H
#define EXERCISM_LOG_LINE_H

#include <string>

namespace log_line
{
    std::string message(std::string word)
    {
        return word.substr(word.find(':') + 2);
    }

    std::string log_level(std::string word)
    {
        return word.substr(word.find('[') + 1, word.find(']') - 1);
    }

    std::string reformat(std::string word)
    {
        std::string result;
        auto messageString = message(word);
        size_t messageSize = messageString.size();
        auto logString = log_level(word);
        size_t logSize = logString.size();

        result.reserve(messageSize + logSize + 3);

        result += messageString;
        result += " (" + logString + ")";
        return result;
    }
}
#endif //EXERCISM_LOG_LINE_H
