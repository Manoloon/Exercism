#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "Src/circular_buffer.h"
#include "Src/three_sum.h"

int main()
{
    std::vector<int> nums ={-1,0,1,2,-1,-4};
    for(const auto& [a, b, c] : three_sum(nums)) {
        std::cout << a << ", " << b << ", " << c << std::endl;
    }

    circular_buffer::circular_buffer<int> buffer(2);
    buffer.write(1);
    buffer.overwrite(2);
    std::cout << buffer.read();
    std::cout << buffer.read();

   circular_buffer::circular_buffer<std::string> bufferString(3);
    bufferString.write("hello");
    bufferString.write("world");
    bufferString.write("zombies");
   std::cout << bufferString.read();
   bufferString.write("pants");
   bufferString.overwrite("banana");
   std::cout << bufferString.read();
   std::cout << bufferString.read();
   std::cout << bufferString.read();
   return 0;
}