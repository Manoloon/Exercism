//
// Created by Manoloon on 08/12/2021.
//

#ifndef EXERCISM_PANGRAM_H
#define EXERCISM_PANGRAM_H
#include <string>
#include <vector>

namespace pangram {
    bool is_pangram(std::string& Phrase)
    {
        std::vector<bool>Marked(26, false);
        int index;
        for(auto it:Phrase)
        {
            if('A' <= it && it <= 'Z')
            {
                index=it-'A';
            }
            else if ('a' <= it && it <= 'z')
            {
                index= it-'a';
            }
            else
            {
                continue;
            }
            Marked[index]=true;
        }
        for (int i=0;i<25;i++)
        {
            if(!Marked[i])
            {
                return (false);
            }
        }
        return (true);
    }
}
#endif //EXERCISM_PANGRAM_H
