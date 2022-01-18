#include <iostream>

class Log
{
    public:
    enum Level
    {
        LevelError = 0, LevelWarning, LevelInfo
    };
    private:
    Level m_LogLevel = LevelInfo;

    public:
    void SetLevel(Level level)
    {
        m_LogLevel = LevelError;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= LevelError)
        std::cout << "[Error]: " << message << std::endl;
    }
    void Warn(const char* message)
    {
        if (m_LogLevel >= LevelWarning)
        std::cout << "[Warning]: " << message << std::endl;
    }
    void Info(const char* message)
    {
        if (m_LogLevel >= LevelInfo)
        std::cout << "[Info]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::LevelError);
    log.Error("Hello");
    log.Warn("Hello");
    log.Info("Hello");
    std::cin.get();
}