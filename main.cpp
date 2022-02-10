#include <iostream>
#include <string>
#include "Src/hexadecimal.h"

int main()
{
    std::cout << "0x" << hexadecimal::convert("19ace");
    /**
    for(auto i : school_.roster())
    {
        for(auto v : school_.grade(i.first))
        {
            std::cout << i.first << " : " << v << std::endl;
        }
    }*/
   return 0;
}