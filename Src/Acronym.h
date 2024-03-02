#if !defined(ACRONYM_H)
#define ACRONYM_H
#include <string>
#include <iostream>
#include <regex>
namespace acronym {
    std::string acronym(std::string str){
        std::string result;
        std::regex pattern("[A-Za-z][^-\\s]*");
        
    auto word_begin = std::sregex_iterator(std::begin(str), 
                      std::end(str), 
                      pattern);
        
    auto word_end = std::sregex_iterator();
        
        for(std::sregex_iterator it = word_begin;it != word_end;++it)
        {
           std::smatch match = *it;
           char first_letter = match.str()[0];
           result += std::toupper(first_letter);
        }
        return result;
    }
}  // namespace acronym

void TestSolution(){
    std::string actual = acronym::acronym("Portable Network Graphics");
    std::string expected{"PNG"};
    std::cout << actual << " : " << expected << std::endl;

    actual = acronym::acronym("Ruby on Rails");
    expected = {"ROR"};
    std::cout << actual << " : " << expected << std::endl;

    actual = acronym::acronym("First In, First Out");
    expected = {"FIFO"};
    std::cout << actual << " : " << expected << std::endl;

    actual = acronym::acronym("GNU Image Manipulation Program");
    expected = {"GIMP"};
    std::cout << actual << " : " << expected << std::endl;

    actual = acronym::acronym("Complementary metal-oxide semiconductor");
    expected = {"CMOS"};
    std::cout << actual << " : " << expected << std::endl;

    actual = acronym::acronym("Rolling On The Floor Laughing So Hard That My Dogs Came Over And Licked Me");
    expected = {"ROTFLSHTMDCOALM"};
    std::cout << actual << " : " << expected << std::endl;

    actual = acronym::acronym("Something - I made up from thin air");
    expected={"SIMUFTA"};
    std::cout << actual << " : " << expected << std::endl;

    actual = acronym::acronym("Halley's Comet");
    expected={"HC"};
    std::cout << actual << " : " << expected << std::endl;

    actual = acronym::acronym("The Road _Not_ Taken");
    expected={"TRNT"};
    std::cout << actual << " : " << expected << std::endl;
}
#endif // ACRONYM_H