#include <iostream>

int main()
{
    //This will work in C++ version 11
    //std::array<int, 5> another;

    //Created on the stack
    int example[5];
    for (int i = 0; i < 5; i++)
        example[i] = 2;

    //Created on the heap
    int *another = new int[5];
    for (int i = 0; i < 5; i++)
        another[i] = 2;

    delete[] another;

    std::cin.get();
}

