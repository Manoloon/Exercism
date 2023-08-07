//
// Created by Manoloon on 14/04/2022.
//
/*
 * Instructions
Each of us inherits from our biological parents a set of chemical instructions known as DNA that influence how our
 bodies are constructed. All known life depends on DNA!
Note: You do not need to understand anything about nucleotides or DNA to complete this exercise.
DNA is a long chain of other chemicals and the most important are the four nucleotides, adenine, cytosine, guanine and
 thymine. A single DNA chain can contain billions of these four nucleotides and the order in which they occur is
 important! We call the order of these nucleotides in a bit of DNA a "DNA sequence".
We represent a DNA sequence as an ordered collection of these four nucleotides and a common way to do that is with a
 string of characters such as "ATTACG" for a DNA sequence of 6 nucleotides. 'A' for adenine, 'C' for cytosine, 'G'
 for guanine, and 'T' for thymine.
Given a string representing a DNA sequence, count how many of each nucleotide is present. If the string contains
 characters that aren't A, C, G, or T then it is invalid and you should signal an error.
For example:
"GATTACA" -> 'A': 3, 'C': 1, 'G': 1, 'T': 2
"INVALID" -> error
 */
#ifndef EXERCISM_NUCLEOTIDE_COUNT_H
#define EXERCISM_NUCLEOTIDE_COUNT_H
#include<string>
#include <map>
namespace nucleotide_count
{
    class counter
    {
    private:
        std::string Chain;
        std::map<char, int> Nucleotides{ {'A', 0}, {'T', 0}, {'C', 0}, {'G', 0} };
    public:
       explicit counter(std::string NewChain);
       int count(char NucleoTide) const;

       [[maybe_unused]] [[nodiscard]] std::map<char,int> nucleotide_counts() const;
    };
}
#endif //EXERCISM_NUCLEOTIDE_COUNT_H
