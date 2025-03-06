#include <iostream>
#include <cmath>
#include "ellipse.h"
#include "ellipse.cpp"

using namespace std;

int main()
{
    Ellipse elps, elps_copy;

    elps = Ellipse(1, 2, 3, 4, true);
    elps_copy = elps;

    cout<< "Hyperparameter = " << elps.count_hyperparametr() <<endl;

    cout<< "\nCoordinates of some main points:" <<endl;
    elps.point_coordinates();
    elps.focus_coordinates();


    elps.print_data();

    cout<< "\nВзаимное расположение точки (-3; 2):" <<endl; 
    elps.inside_status(-3, 2);

    cout<< "\nPerimeter and square of ellipse:" <<endl;
    cout<< "P = " << elps.calculate_perimeter() << "\n" <<
    "S = " << elps.calculate_square() << "\n" <<endl;

    elps.count_loc_hord();
    elps.count_excentritet();

    cout << "Not given coordinate is " << elps.calculate_coord(5, true) <<endl;

    cout<< "\nSet and get operations:" <<endl;
    elps.set_all(5, 6, 7, 8, false);
    double h_coord, k_coord, par_a, par_b;
    bool x_status;
    elps.get_all(h_coord, k_coord, par_a, par_b, x_status);
    cout<< "h = " << h_coord <<endl;
    cout<< "k = " << k_coord <<endl;
    cout<< "a = " << par_a <<endl;
    cout<< "b = " << par_b <<endl;
    cout<< "x_is_main = " << x_status <<endl;

    

    return 0;
}