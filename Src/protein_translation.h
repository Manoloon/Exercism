/*
Translate RNA sequences into proteins.
RNA can be broken into three nucleotide sequences called codons, and then translated to a polypeptide like so:
RNA: "AUGUUUUCU" => translates to
Codons: "AUG", "UUU", "UCU" => which become a polypeptide with the following sequence =>
Protein: "Methionine", "Phenylalanine", "Serine"
There are also three terminating codons (also known as 'STOP' codons); if any of these codons are encountered (by the ribosome), all translation ends and the protein is terminated.

All subsequent codons after are ignored, like this:
RNA: "AUGUUUUCUUAAAUG" =>
Codons: "AUG", "UUU", "UCU", "UAA", "AUG" =>
Protein: "Methionine", "Phenylalanine", "Serine"

Note the stop codon "UAA" terminates the translation and the final methionine is not translated into the protein sequence.
Below are the codons and resulting Amino Acids needed for the exercise.
Codon 	Protein
AUG 	Methionine
UUU, UUC 	Phenylalanine
UUA, UUG 	Leucine
UCU, UCC, UCA, UCG 	Serine
UAU, UAC 	Tyrosine
UGU, UGC 	Cysteine
UGG 	Tryptophan
UAA, UAG, UGA 	STOP

TEST_CASE("Phenylalanine_RNA_sequence_1")
{
    REQUIRE(vector<string>{"Phenylalanine"} == protein_translation::proteins("UUU"));
}
*/
#if !defined(PROTEIN_TRANSLATION_H)
#define PROTEIN_TRANSLATION_H

#include <unordered_map>
#include <string>
#include <string_view>
#include <vector>
#include <iostream>

namespace protein_translation {
        std::unordered_map<std::string,std::string> AminoMap{
            {"AUG", 	                "Methionine"},
            {"UUU",                     "Phenylalanine"},
            {"UUC",                     "Phenylalanine"},
            {"UUA", 	                "Leucine"},
            {"UUG",                     "Leucine"},
            {"UCU",	                    "Serine"},
            {"UCC",	                    "Serine"},
            {"UCA",	                    "Serine"},
            {"UCG",	                    "Serine"},
            {"UAU", 	                "Tyrosine"},
            {"UAC", 	                "Tyrosine"},
            {"UGU", 	                "Cysteine"},
            {"UGC", 	                "Cysteine"},
            {"UGG", 	                "Tryptophan"}
        };

        std::vector<std::string> proteins(const std::string& codon){
            int length = codon.length();
            if(length<3) return {};
            std::vector<std::string>  result;
            for(int i = 0;i<length;i+=3){
                std::string partial = codon.substr(i,3);
                auto it = AminoMap.find(partial);
                    if(it != std::end(AminoMap)){
                        result.emplace_back(it->second);
                    }
                    else{
                        break;
                    }
                }
            return result;
        }
}  // namespace protein_translation

#endif // PROTEIN_TRANSLATION_H