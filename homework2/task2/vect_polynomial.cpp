#include <iostream>
#include <iomanip>
#include "vect_polynomial.h"


VectPolynomial::VectPolynomial()
{
    this->size = 0;
    this->list = nullptr;
}

VectPolynomial::VectPolynomial(int new_size)
{
    this->size = new_size;
    this->list = nullptr;
}
