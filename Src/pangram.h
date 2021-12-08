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
    for(int i=0;i<Phrase.size();i++)
    {
        if('A' <= Phrase[i] && Phrase[i] <= 'Z')
        {
            index=Phrase[i]-'A';
        }
        else if ('a' <= Phrase[i] && Phrase[i] <= 'z')
        {
            index=Phrase[i]-'a';
        }
        else
        {
            continue;
        }
        Marked[index]=true;
    }
    for (int i=0;i<25;i++)
    {
        if(Marked[i]== false)
        {
            return (false);
        }
    }
    return (true);
}
}
#endif //EXERCISM_PANGRAM_H
