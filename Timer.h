//
// Created by Manoloon on 07/03/2022.
// Simple timer for measure functions
//

#ifndef EXERCISM_TIMER_H
#define EXERCISM_TIMER_H
#include <chrono>
#include <iostream>
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

#endif //EXERCISM_TIMER_H
