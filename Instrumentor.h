//
// Created by Manoloon on 07/03/2022.
//

#ifndef EXERCISM_INSTRUMENTOR_H
#define EXERCISM_INSTRUMENTOR_H
#include <fstream>
#include <thread>
struct ProfileResult
{
    std::string Name;
    long long Start,End;
    uint32_t  ThreadID;
};

struct InstrumentationSession
{
    std::string Name;
};
class Instrumentor
{
private:
    InstrumentationSession* currentSession;
    std::ofstream outputStream;
    int profileCount;
public:
    Instrumentor(): currentSession(nullptr), profileCount(0){}

    void BeginSession(const std::string name, const std::string& filePath = "results.json")
    {
        outputStream.open(filePath);
        WriteHeader();
        currentSession = new InstrumentationSession{name};
    }
    void EndSession()
    {
        WriteFooter();
        outputStream.close();
        delete currentSession;
        currentSession = nullptr;
        profileCount = 0;
    }

    void WriteProfile(const ProfileResult& result)
    {
        if(profileCount++ >0)
        {
            outputStream << ",";
        }
        std::string name = result.Name;
        std::replace(name.begin(),name.end(),'"','\'');

        outputStream << "{";
        outputStream << "\"cat\":\"function\",";
        outputStream << "\"dur\":" << (result.End - result.Start) << ',';
        outputStream << "\"name\":\"" << name << "\",";
        outputStream << "\"ph\":\"X\",";
        outputStream << "\"pid\":0,";
        outputStream << "\"tid\":" << result.ThreadID << ",";
        outputStream << "\"ts\":" << result.Start;
        outputStream << "}";

        outputStream.flush();
    }

    void WriteHeader()
    {
        outputStream << "{\"otherData\": {},\"traceEvents\":[";
        outputStream.flush();
    }
    void WriteFooter()
    {
        outputStream << "]}";
        outputStream.flush();
    }
    static Instrumentor& Get()
    {
        static Instrumentor* instance = new Instrumentor();
        return *instance;
    }
};

class InstrumentationTimer
{
public:
    InstrumentationTimer(const char* name) : m_name(name), m_stopped(false)
    {
        startTimePoint = std::chrono::high_resolution_clock::now();
    }

    ~InstrumentationTimer()
    { if(!m_stopped)
        {
            Stop();
        }
    }

    void Stop()
    {
        auto endTimePoint = std::chrono::high_resolution_clock::now();
        auto start = std::chrono::time_point_cast<std::chrono::microseconds>(startTimePoint).time_since_epoch().count();
        auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimePoint).time_since_epoch().count();

        uint32_t  threadID = std::hash<std::thread::id>{}(std::this_thread::get_id());
        Instrumentor::Get().WriteProfile({m_name,start,end,threadID});
        m_stopped = true;
    }
private:
    const char* m_name;
    bool m_stopped;
    std::chrono::time_point<std::chrono::high_resolution_clock> startTimePoint;
};
#endif //EXERCISM_INSTRUMENTOR_H
