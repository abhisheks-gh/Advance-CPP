// Using multiple threads to boost performance.
// So that two instructions can pe executed simultaneously.

#include <iostream>
#include <thread>

static bool s_Finished = false;

void Dowork()
{
    using namespace std::literals::chrono_literals;

    std::cout << "Started thread I'd : " << std::this_thread::get_id() << std::endl;

    while (!s_Finished)
    {
        std::cout << "Working...\n";
        std::this_thread::sleep_for(1s);
    }
}

int main()
{
    // passed Dowork as a function pointer
    std::thread worker(Dowork); 

    std::cin.get();
    // Set s_Finished to true i.e. 1, user presses Enter 1st time for cin.get()
    s_Finished = true; 

    // 1st thread will wait for the second thread to complete it's execution.
    worker.join(); 
    
    std::cout << "Finished!" << std::endl;

    std::cout << "Finished thread I'd : " << std::this_thread::get_id() << std::endl;
    
    // This line will execute after the joining of two thread.
    std::cin.get();  
}
