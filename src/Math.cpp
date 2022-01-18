#include<iostream>
void Log(const char* message)
{
    std::cout << message << std::endl;
}


static int Multiply(int a,int b)
{
   Log("Multiply");
   return a * b;
}

int main()
{
    std::cout <<Multiply(5, 8) << std::endl;
    std::cin.get();  //will hold the console screen until we press enter4
}