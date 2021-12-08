#include <iostream>
#include "Src/pangram.h"
#include <string>

int main()
{
   //std::string frase = "\"Five quacking Zephyrs jolt my wax bed.\"";
   std::cout << "is pangram? " <<  pangram::is_pangram(frase) << std::endl;
   return 0;
}
