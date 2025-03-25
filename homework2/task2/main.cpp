#include <iostream>
#include "polynomial.h"
#include "vect_polynomial.h"

#include "polynomial.cpp"
#include "vect_polynomial.cpp"


int main()
{
    Polynomial p = Polynomial(1, 3);
    p.print();
    double coef[3] = {3., 2., 1.};
    p.set_coef(coef, 3);
    p.print();
    p.set_size(5);
    p.print();
    int b= 1;
    return 0;
}
