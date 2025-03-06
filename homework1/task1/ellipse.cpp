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

int* Ellipse::point_coordinates()
{
    int p_coord[8] = {h - a, k,
                    h + a, k,
                    h, k - a,
                    h, k + a};
    
        return p_coord;
}

int* Ellipse::focus_coordinates()
{
    int f_coord[8] = {h - count_hyperparametr(), k,
                      h + count_hyperparametr(), k,
                      h, k - count_hyperparametr(),
                      h, k + count_hyperparametr()};

    return f_coord;
}

double Ellipse::count_loc_hord()
{
    return (2 * pow(b, 2)) / a;
}

double Ellipse::count_excentritet()
{
    return count_hyperparametr() / a;
}

void Ellipse::print_data()
{
    cout<< "-----------DATA-----------" <<endl;
    cout<< "1)  (x - " << h << ")^2 / " << pow(a, 2) << " + (y - " << k << ")^2 / " << pow(b, 2) << "= 1" <<endl;
    cout<< "2)  C(" << h << ", " << k << ")" <<endl;
    cout<< "3)  V1_x(" << point_coordinates()[1] << ", " << point_coordinates()[2] << ")\n" <<
            "   V2_x(" << point_coordinates()[3] << ", " << point_coordinates()[4] << ")\n" <<
            "   V1_y(" << point_coordinates()[5] << ", " << point_coordinates()[6] << ")\n" <<
            "   V2_y(" << point_coordinates()[7] << ", " << point_coordinates()[8] << ")" <<endl;
    cout<< "4)  F1_x(" << focus_coordinates()[1] << ", " << focus_coordinates()[2] << ")\n" <<
            "   F2_x(" << focus_coordinates()[3] << ", " << focus_coordinates()[4] << ")\n" <<
            "   F1_y(" << focus_coordinates()[5] << ", " << focus_coordinates()[6] << ")\n" <<
            "   F2_y(" << focus_coordinates()[7] << ", " << focus_coordinates()[8] << ")" <<endl;
}