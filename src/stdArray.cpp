#include <iostream>
#include <array>

void main() 
{          
    std::array<int, 5> array;
    array[0] = 2;
    
    std::cout << array[0] << std::endl;

    std::cin.get();
}