#include <iostream>
#include <string>
#include <vector>

#include "Instrumentor.h"
#include "Src/binary_search.h"
// macro para profiling ////////////////////////////////////////////////
#define PROFILING 1
#if PROFILING
#define PROFILE_SCOPE(name) InstrumentationTimer timer##__LINE__(name)
#define PROFILE_FUNCTION() PROFILE_SCOPE(__FUNCTION__) // PROFILE_SCOPE(__FUNCSIG__) -> for functions with parameters
#else
#define PROFILE_SCOPE(name)
#endif
/////////////////////////////////////////////////////////////////////////

int main()
{
    // using the new instrumentor for profiling
    Instrumentor::Get().BeginSession("Profile");

    {
        PROFILE_FUNCTION();
        const std::vector<int> data {1, 3, 4, 6, 8, 9, 11,4312,212,455,7,154523,4234234,42356,2345,66775,88956};
        //Timer timer;
        const std::size_t actual = binary_search::find(data, 4312);
        std::cout << "found at position : " << actual << std::endl;
    }
    {
        PROFILE_FUNCTION();
        const std::vector<int> data {1, 3, 4, 6, 8, 9, 11,4312,212,455,7,154523,4234234,42356,2345,66775,88956};
        //Timer timer;
        const std::size_t actual = binary_search::findSimple(data, 4312);
        const std::size_t expected = 3;
        std::cout << "found at position : " << actual << std::endl;
    }
    Instrumentor::Get().EndSession();
    /**
    for (auto it = actual.begin(); it != actual.end(); ++it)
    {
         for(auto& element : *it)
           {
               std::cout << element << " ";
           }
           std::cout << "\n";
    }

    VisualPatterns::HalfPyramidLeft(10);
    VisualPatterns::HalfInvertedPyramidLeft(10);
    VisualPatterns::FullPyramid(10);
    VisualPatterns::Square(10);
     */
   return 0;
}