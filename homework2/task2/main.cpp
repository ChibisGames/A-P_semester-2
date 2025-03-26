#include <iostream>

#include "polynomial.h"
#include "vect_polynomial.h"

#include "polynomial.cpp"
#include "vect_polynomial.cpp"


void defaultFilling(VectPolynomial &v);
int my_rand();

int DEFAULT_VECTOR_SIZE = 5;
int DEFAULT_POLYMIAL_SIZE = 3;

int main()
{
    VectPolynomial v1(DEFAULT_VECTOR_SIZE);
    VectPolynomial v2(DEFAULT_VECTOR_SIZE);
    VectPolynomial v(DEFAULT_VECTOR_SIZE);

    defaultFilling(v1);
    defaultFilling(v2);

    for (int i = 0; i < DEFAULT_VECTOR_SIZE - DEFAULT_VECTOR_SIZE % 2; i++)
    {
        /* Code */
    }
}

void defaultFilling(VectPolynomial &v) // For two func's not want craete new files
{
    Polynomial p(1, DEFAULT_POLYMIAL_SIZE);


    double a[DEFAULT_POLYMIAL_SIZE] = {0., 0., 0.};

    for (int i = 0; i < DEFAULT_VECTOR_SIZE - 1; i++)
    {
        for (int j = 0; j < DEFAULT_POLYMIAL_SIZE; j++)
        {
            a[j] = (double)(my_rand() % 10);
        }
        p.set_coef(a, DEFAULT_POLYMIAL_SIZE);
        p.set_x(my_rand() % 10);
        v.set_polymial(p, i);     
    }
}

int my_rand()
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int random;
    for (int i = 0; i < 9; i++)
    {
        for(;;)
        {
            bool good = true;
            random = 1 + rand() % 9;
            for (int j = 0; j < 9; j++)
            {
                if (random == a[j])
                { 
                    good = false; 
                    break; 
                }
            }
            if (good == false) 
            {
                break;
            }
        }
        a[i] = random;
    }
    return random;
}