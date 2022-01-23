#include <iostream>
#include <string>

void DoWork()
{
    int iterator;
}

int main()
{

    //Lambda is a ambigious function that physically don't even exist. Kind of temp. function.

    //[] stands for Capture which basically captures objects/variables of different scope either by 
    //value (=) or by reference (&).

    //Example:
    // [=](){//definition}; or [&](){//definition}; or [&variable](){//definition};
    //                                      // Here we can capture variables of other scopes as well.

    // () this contains parameter (either the data type or the variable passed).
    // {} contains the definition.


    [](std::string) {std::cout << "This is an Lambda which is basically a ambigious function" << std::endl;};
    std::cin.get();
}

// General uses of lambdas -> Whenever we use function pointers.
