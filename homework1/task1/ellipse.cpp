#include <iostream>
#include <cmath>
#include "ellipse.h"

using namespace std;

Ellipse::Ellipse(double h_coord, double k_coord, double a_par, double b_par)
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

void Ellipse::normalize_axis(double &par1, double &par2)
{
    double temp;

    if (par1 > par2)
    {
        temp = par1;
        par1 = par2;
        par2 = temp;
    }
}

double Ellipse::count_hyperparametr()
{
    return sqrt(pow(a, 2) - pow(b, 2));
}

void Ellipse::set_all(double h_coord, double k_coord, double par_a, double par_b)
{
    h = h_coord;
    k = k_coord;
    a = par_a;
    b = par_b;
}

void Ellipse::get_all(double &h_coord, double &k_coord, double &par_a, double &par_b)
{
    h_coord = h;
    k_coord = k;
    par_a = a;
    par_b = b;
}

void Ellipse::point_coordinates()
{
    cout<< "V1_x(" << h - a << ", " << k << ")\n" <<
           "V2_x(" << h + a << ", " << k << ")\n" <<
           "V1_y(" << h << ", " << k - a  << ")\n" <<
           "V2_y(" << h << ", " << k + a  << ")" <<endl;
}

void Ellipse::focus_coordinates()
{
    cout<< "F1_x(" << h - count_hyperparametr() << ", " << k << ")\n" <<
           "F2_x(" << h + count_hyperparametr() << ", " << k << ")\n" <<
           "F1_y(" << h << ", " << k - count_hyperparametr() << ")\n" <<
           "F2_y(" << h << ", " << k + count_hyperparametr() << ")" <<endl;
}

void Ellipse::count_loc_hord()
{
    cout<< "LR = " << (2 * pow(b, 2)) / a <<endl;
}

void Ellipse::count_excentritet()
{
    cout<< "e = " << count_hyperparametr() / a <<endl;;
}

void Ellipse::print_data()
{
    cout<< "-----------DATA-----------" <<endl;
    cout<< "1)  (x - " << h << ")^2 / " << pow(a, 2) << " + (y - " << k << ")^2 / " << pow(b, 2) << "= 1" <<endl;
    cout<< "2)  C(" << h << ", " << k << ")" <<endl; 
}