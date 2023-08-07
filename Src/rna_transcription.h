//
// Created by Manoloon on 18/04/2022.
//
/*
 * Instructions
Given a DNA strand, return its RNA complement (per RNA transcription).
Both DNA and RNA strands are a sequence of nucleotides.
The four nucleotides found in DNA are adenine (A), cytosine (C), guanine (G) and thymine (T).
The four nucleotides found in RNA are adenine (A), cytosine (C), guanine (G) and uracil (U).
Given a DNA strand, its transcribed RNA strand is formed by replacing each nucleotide with
 its complement:
    G -> C
    C -> G
    T -> A
    A -> U
 */
#ifndef EXERCISM_RNA_TRANSCRIPTION_H
#define EXERCISM_RNA_TRANSCRIPTION_H
#include <string_view>
namespace rna_transcription
{
    // c++20
    char to_rna(const char &RnaStrand);
    [[maybe_unused]] std::string to_rna(std::string_view RNAStrand);
    // c++17
    char to_rnaOlder(const char &RnaStrand);
    [[maybe_unused]] std::string to_rnaOlder(std::string_view RNAStrand);
}


#endif //EXERCISM_RNA_TRANSCRIPTION_H
