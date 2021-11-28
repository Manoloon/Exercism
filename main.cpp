#include <iostream>
#include "Src/space_age.h"
#include <iomanip>

int main()
{
    space_age Space(3000000000);
    std::cout <<  Space.on_earth()<< std::endl;
    std::cout <<  Space.on_saturn()<< std::endl;
    return 0;
}
