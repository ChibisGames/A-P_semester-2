#include <iostream>
#include <cmath>
#include "ellipse.h"

using namespace std;

Ellipse::Ellipse(double h_coord, double k_coord, double a_par, double b_par, bool x_status)
{
    h = h_coord;
    k = k_coord;
    a = a_par;
    b = b_par;
    x_is_main = x_status;

    normalize_axis(b, a);
}

Ellipse::Ellipse(const Ellipse &e)
{
    h = e.h;
    k = e.k;
    a = e.a;
    b = e.b;
    x_is_main = e.x_is_main;

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

void Ellipse::set_all(double h_coord, double k_coord, double par_a, double par_b, bool x_status)
{
    h = h_coord;
    k = k_coord;
    a = par_a;
    b = par_b;
    x_is_main = x_status;
}

void Ellipse::get_all(double &h_coord, double &k_coord, double &par_a, double &par_b, bool &x_status)
{
    h_coord = h;
    k_coord = k;
    par_a = a;
    par_b = b;
    x_status = x_is_main;
}

void Ellipse::point_coordinates()
{
    if (x_is_main)
    {
        cout<< "V1(" << h - a << ", " << k << ")\n" <<
               "V2(" << h + a << ", " << k << ")" <<endl;
    }
    else
    {
        cout<< "V1(" << h << ", " << k - a  << ")\n" <<
               "V2(" << h << ", " << k + a  << ")" <<endl;
    }
}

void Ellipse::focus_coordinates()
{
    if (x_is_main)
    {
    cout<< "F1(" << h - count_hyperparametr() << ", " << k << ")\n" <<
           "F2(" << h + count_hyperparametr() << ", " << k << ")" <<endl;
    }
    else
    {
    cout<< "F1(" << h << ", " << k - count_hyperparametr() << ")\n" <<
           "F2(" << h << ", " << k + count_hyperparametr() << ")" <<endl;
    }
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
    cout<< "\n-----------DATA-----------" <<endl;
    cout<< "(x - " << h << ")^2 / " << pow(a, 2) << " + (y - " << k << ")^2 / " << pow(b, 2) << " = 1\n" <<endl;
    cout<< "C(" << h << ", " << k << ")" <<endl;
    cout<<endl;
    point_coordinates();
    cout<<endl;
    focus_coordinates();
}

void Ellipse::inside_status(double x, double y)
{
    if (x_is_main)
    {
        if ((pow((x - h) / a, 2) + pow((y - k) / b, 2)) < 1) {cout<< "Точка внутри эллипса" <<endl;}
        else if ((pow((x - h) / a, 2) + pow((y - k) / b, 2)) == 1) {cout<< "Точка принадлежит эллипсу" <<endl;}
        else {cout<< "Точка вне эллипса" <<endl;}
    }
    else
    {
        if ((pow((x - h) / b, 2) + pow((y - k) / a, 2)) < 1) {cout<< "Точка внутри эллипса" <<endl;}
        else if ((pow((x - h) / b, 2) + pow((y - k) / a, 2)) == 1) {cout<< "Точка принадлежит эллипсу" <<endl;}
        else {cout<< "Точка вне эллипса" <<endl;}
    }
}

double Ellipse::calculate_perimeter()
{
    return acos(-1) * (3 * (a + b) - sqrt((3 * a + b) * (a + 3 * b)));
}

double Ellipse::calculate_square()
{
    return acos(-1) * a * b;
}

double Ellipse::calculate_coord(double par, bool x_given_status)
{
    if (x_given_status)
    {
        if (x_is_main)
        {
            return ((b / a) * sqrt(pow(a, 2) - pow(par - h, 2))) + k;
        }
        else
        {
            return ((a / b) * sqrt(pow(b, 2) - pow(par - h, 2))) + k;
        }
    }
    else
    {
        if (x_is_main)
        {
            return ((a / b) * sqrt(pow(b, 2) - pow(par - k, 2))) + h;
        }
        else
        {
            return ((b / a) * sqrt(pow(a, 2) - pow(par - k, 2))) + h;
        }
    }
}