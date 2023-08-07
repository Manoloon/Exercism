//
// Created by Manoloon on 14/04/2022.
//
/*
 *  const nucleotide_count::counter dna("GGTTGG");
 *  std::cout << dna.count('T');
 */
#include "nucleotide_count.h"
#include <stdexcept>
namespace nucleotide_count
{
    counter::counter(std::string NewChain):Chain(std::move(NewChain))
    {
        for(const char Nucleo: Chain)
        {
            if(Nucleotides.find(Nucleo) == Nucleotides.end())
            {
                throw std::invalid_argument("Nucleotide invalid on Construction");
            }
            else
            {
                Nucleotides.at(Nucleo)++;
            }
        }
    }

    int counter::count(char NucleoTide) const
    {
        if(Nucleotides.find(NucleoTide) == Nucleotides.end())
        {
            throw std::invalid_argument("Nucleotide invalid");
        }
        return Nucleotides.at(NucleoTide);
    }

    [[maybe_unused]] std::map<char, int> counter::nucleotide_counts() const
    {
        return Nucleotides;
    }
}