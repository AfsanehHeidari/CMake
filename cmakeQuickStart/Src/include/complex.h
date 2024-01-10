#include<iostream>
template <class T>
class complex
{
public:
   T a;
   T b;

   complex(T x=0.0 , T y=0.0) :a(x) , b(y){}

     complex<T> complexSum(const complex<T>& z) {
    return complex<T>(a + z.a, b + z.b);
}

     friend std::ostream& operator<<(std::ostream& os, complex obj) {
        //os << "MyClass data: "; //<< obj.data;
        os << obj.a << "+" << obj.b << "i";
        return os;
     }
    //complex<T> complexSum(complex<T> & z);
   };