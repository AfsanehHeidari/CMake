#include <iostream>
#include "Calculator.h"
#include "complex.h"
int main(int, char**){
    std::cout << "Hello, from CMakeLists!\n";

    std::cout << "Welcome to C++ Tutorials!" << std::endl;
    Calculator<int> c1 ;  // Create an instance of the Sum class
    int result =c1.calculateSum(1, 6);  // Call the calculateSum method on the instance
    std::cout << "Sum: " << result << std::endl;

    Calculator<int> c2;  // Create an instance of the Sub class
    int result1 =c2.calculateSub(8, 6);  // Call the calculateSub method on the>
    std::cout << "Sub: " << result1 << std::endl;

    Calculator<int> c3;  // Create an instance of the mul class
    int result2 =c3.calculatemul(8, 6);  // Call the calculatemul method on th>
    std::cout << "multiplication: " << result2 << std::endl;

    Calculator<int> c4;  // Create an instance of the div class
    int result3 =c4.calculatediv(8, 4);  // Call the calculatediv method on th>
    std::cout << "division: " << result3 << std::endl;
    
    Calculator<int> a1;
    Calculator<int> a2;
    a2=a1;
    std::cout<< a2 <<std::endl;

    complex<float> a3(2.6 , 3.0);
    complex<float> a4(1.4 , 2.0);
    std ::cout << a3.complexSum(a4)<< std::endl;
    return 0;
}
