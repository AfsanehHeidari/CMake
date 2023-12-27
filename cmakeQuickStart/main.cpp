#include <iostream>
#include "Calculator.h"
int main(int, char**){
    std::cout << "Hello, from CMakeLists!\n";

    std::cout << "Welcome to C++ Tutorials!" << std::endl;
    Calculator c1;  // Create an instance of the Sum class
    int result = c1.calculateSum(1, 6);  // Call the calculateSum method on the instance
    std::cout << "Sum: " << result << std::endl;
    return 0;
}
