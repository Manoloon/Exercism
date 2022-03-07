#include <iostream>
#include <string>
#include <chrono>
#include <vector>
#include "Src/binary_search.h"
class Timer
{
public:
    Timer()
    {
        startTimePoint = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    { Stop(); }

    void Stop()
    {
        auto endTimePoint = std::chrono::high_resolution_clock::now();
        auto start = std::chrono::time_point_cast<std::chrono::microseconds>(startTimePoint).time_since_epoch().count();
        auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimePoint).time_since_epoch().count();
        auto duration = end - start;
        auto ms = duration * 0.001;
        std::cout << duration << "us (" << ms << "ms)\n";

    }
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> startTimePoint;
};

int main()
{
    {
        const std::vector<int> data {1, 3, 4, 6, 8, 9, 11,4312,212,455,7,154523,4234234,42356,2345,66775,88956};
        Timer timer;
        const std::size_t actual = binary_search::find(data, 4312);
        std::cout << "found at position : " << actual << std::endl;
    }
    {
        const std::vector<int> data {1, 3, 4, 6, 8, 9, 11,4312,212,455,7,154523,4234234,42356,2345,66775,88956};
        Timer timer;
        const std::size_t actual = binary_search::findSimple(data, 4312);
        const std::size_t expected = 3;
        std::cout << "found at position : " << actual << std::endl;
    }

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