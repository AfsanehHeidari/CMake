#include <iostream>
#include "Calculator.h"
int main(int, char**){
    std::cout << "Hello, from CMakeLists!\n";

    std::cout << "Welcome to C++ Tutorials!" << std::endl;
    Calculator c1;  // Create an instance of the Sum class
    int result = c1.calculateSum(1, 6);  // Call the calculateSum method on the instance
    std::cout << "Sum: " << result << std::endl;

    Calculator c2;  // Create an instance of the Sub class
    int result1 = c2.calculateSub(8, 6);  // Call the calculateSub method on the>
    std::cout << "Sub: " << result1 << std::endl;

    Calculator c3;  // Create an instance of the mul class
    int result2 = c3.calculatemul(8, 6);  // Call the calculatemul method on th>
    std::cout << "multiplication: " << result2 << std::endl;

    Calculator c4;  // Create an instance of the div class
    int result3 = c4.calculatediv(8, 4);  // Call the calculatediv method on th>
    std::cout << "division: " << result3 << std::endl;

    return 0;
}
