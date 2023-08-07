//
// Created by Manoloon on 18/04/2022.
//
/*
 * HOW TO USE :
 *  std::cout << rna_transcription::to_rnaOlder('C') << std::endl;
    std::cout << rna_transcription::to_rnaOlder("ACGTGGTCTTAA") << std::endl;
    return G, return "UGCACCAGAAUU"
 */
#include "rna_transcription.h"
#include <stdexcept>
#include <map>
namespace rna_transcription
{
    std::map<const char,const char> GetRnaTable()
    {
        return {{'G','C'},{'C','G'},{'T','A'},{'A','U'}};;
    }
    /////// c++ 20
    char to_rna(const char &RnaStrand)
    {
        if (GetRnaTable().contains(RnaStrand))
                return GetRnaTable().at(RnaStrand);
        throw std::invalid_argument("RNA Strand not found");
    }

    [[maybe_unused]] std::string to_rna(std::string_view RNAStrand)
    {
        std::string OutTable;
        for(const char &i : RNAStrand)
            if(GetRnaTable().contains(i))
                OutTable += GetRnaTable().at(i);
        return OutTable;
    }
    ///////////
    char to_rnaOlder(const char &RnaStrand)
    {
        if (GetRnaTable().find(RnaStrand)  != GetRnaTable().end())
            return GetRnaTable().at(RnaStrand);
        throw std::invalid_argument("RNA Strand not found");
    }

    std::string to_rnaOlder(std::string_view RNAStrand)
    {
        std::string OutTable;
        for(const char &i : RNAStrand)
            if(GetRnaTable().find(i)  != GetRnaTable().end())
                OutTable += GetRnaTable().at(i);
        return OutTable;
    }

}