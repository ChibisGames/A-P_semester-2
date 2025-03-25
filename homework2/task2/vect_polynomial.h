#pragma once
#include "polynomial.h"


class VectPolynomial
{
private:
    Polynomial *list;
    unsigned int size;

public:
    VectPolynomial();
    VectPolynomial(int size);
    VectPolynomial(const VectPolynomial &v);
    ~VectPolynomial();
};


