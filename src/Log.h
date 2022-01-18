
// pragma once is a non-standard but widely supported preprocessor directive
// designed to cause the current source file to be included only once in a 
// single compilation.

#include <iostream>

void InitLog();
void Log(const char* message)
{
    std::cout << message << std::endl;
}

