#include <iostream>
#include "Src/pangram.h"
#include <string>
#include <limits>

int main()
{
   std::string frase = "\"Five quacking Zephyrs jolt my wax bed.\"";
   std::cout << "is pangram? " <<  pangram::is_pangram(frase) << std::endl;
    std::cout << std::numeric_limits<std::byte>::min << std::endl;
   return 0;
}
