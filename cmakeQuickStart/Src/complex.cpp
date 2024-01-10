#include "complex.h"
  template <>
  complex<int> complex <int>::complexSum(const complex<int>& z) {
        a= a+ z.a;
        b= b + z.b;
        return complex(a+b);
    }
    