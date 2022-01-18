#include <iostream>

int main()
{
    int example[5];
    int* ptr = example;

    example[2] = 5;
    *(ptr + 2) = 6;

    for (int i = 0; i < 5; i++)
        example[i] = 2;
    
    //MEMORY ACCESS VIOLATION
    //Coz we are accessing a memory that don't belong to us.
    //example[-1] = 5;
    //example[5] = 2;

    //This will print memory address of the array.
    //Coz it is pointer type.
    //std::cout << example << std::endl; 

    std::cin.get();
}