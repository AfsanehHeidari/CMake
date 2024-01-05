  #include "Calculator.h"
  template <>
  int Calculator<int>::calculateSum(int a, int b) {
        return a + b;
    }
  template <>
  int Calculator<int>::calculateSub(int a, int b) {
        return a - b;
    }
  template <>
   int Calculator<int>::calculatemul(int a, int b) {
        return a * b;
    }
  template <>
   int Calculator<int>::calculatediv(int a, int b) {
        return a / b;
    }



