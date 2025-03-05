#include <iostream>
#include "ellipse.h"

using namespace std;

Ellipse::Ellipse(int h_coord, int k_coord, int a_par, int b_par)
{
    h = h_coord;
    k = k_coord;
    a = a_par;
    b = b_par;

    normalize_axis(b, a);
}

Ellipse::Ellipse(const Ellipse &e)
{
    h = e.h;
    k = e.k;
    a = e.a;
    b = e.b;

    normalize_axis(b, a);
}

void Ellipse::normalize_axis(int &par1, int &par2)
{
    int temp;

    if (par1 > par2)
    {
        temp = par1;
        par1 = par2;
        par2 = temp;
    }
}