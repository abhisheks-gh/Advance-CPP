// Vector is nothing but a dynamic array.

//  OPTIMIZATION STRATEGIES :-

// Optimization Strategy 1: 
// --> Construct the vertex in the same place as it will be stored. Rather than constructing it in the current method and then copying it to the vertex location.
// --> use emplace_back rather than push_back and only pass the parameter list for the constructor

// Ex. vertices.emplace_back(1, 2, 3);


// Optimization Strategy 2: 
// -->Remember to “know your environment”.
// --> If you know that you will need an array to store 3 vertex objects, define it as such so that it is not dynamically resized everytime it runs out of space.

// Ex. First define the vector, then use vertices.reserve(3); (on separate lines)


#include <vector>
#include <iostream>

struct Vertex
{
    float x,y,z;

    Vertex(float x, float y, float z)
        : x(x), y(y), z(z)
        {

        }

    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)
        {
            std::cout << "Copied" << std::endl;
        }
}; 

int main() 
{
    std::vector<Vertex> vertices;  

    // vertices.reserve(3); // Optimization strategy 2 : Reserve memory in advance if u know how many elements u need to push_back.
                            // In this way we can avoid copying and increase performance.

    //  vertices.push_back(Vertex(1, 2, 3));   //OPTIMIZATION STRATEGY 2 :- 
    //  vertices.emplace_back(Vertex(4, 5, 6));  //  CREATE IT INSIDE THE ACTUAL VECTOR RATHER THAN CREATING IT IN MAIN FUNCTION
    //  vertices.emplace_back(Vertex(7, 8, 9));  //  i.e.  So, we can avoid copying of the object from main function to the actual vector.

    //To create it inside the actual vector rathen than creating it in main function :
    // Use "emplace_back" insteada "push_back".
    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(4, 5, 6);
    vertices.emplace_back(7, 8, 9);


    //Erases the particular data inside the dynamic array
    //vertices.erase(vertices.begin() + 1); // Removes the 2nd element i.e. vertices.begin() + 1 

    vertices.clear(); //Clears the whole data
    std::cin.get();   
}


