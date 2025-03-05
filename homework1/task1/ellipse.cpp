#include <iostream>
#include <cmath>
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

Ellipse::~Ellipse(){}

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

int Ellipse::count_hyperparametr()
{
    return sqrt(pow(a, 2) - pow(b, 2));
}

void Ellipse::set_all(int h_coord, int k_coord, int par_a, int par_b)
{
    h = h_coord;
    k = k_coord;
    a = par_a;
    b = par_b;
}

void Ellipse::get_all(int &h_coord, int &k_coord, int &par_a, int &par_b)
{
    h_coord = h;
    k_coord = k;
    par_a = a;
    par_b = b;
}