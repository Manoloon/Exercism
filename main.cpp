#include <iostream>
#include "Src/pangram.h"
#include <string>

int main()
{
   std::string frase = "the quick brown fox jumps over the lazy dog";
   std::cout << "is pangram? " <<  pangram::is_pangram(frase) << std::endl;
   return 0;
}
