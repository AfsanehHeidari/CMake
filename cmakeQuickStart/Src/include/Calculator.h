#include <iostream>
template <class T>
class Calculator
{   
public:

    //Calculator(int value) : data(value) {}

    // Overload << operator for output
    friend std::ostream& operator<<(std::ostream& os, Calculator& obj) {
        os << "MyClass data: "; //<< obj.data;
        return os;
    }

     //Calculator (){};
    T calculateSum(T a, T b);

    T calculateSub(T a, T b);

    T calculatemul(T a, T b);

    T calculatediv(T a, T b);
};
