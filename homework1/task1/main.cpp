#include <iostream>
#include <cmath>
#include "ellipse.h"
#include "ellipse.cpp"

using namespace std;

int main()
{
    Ellipse elps;

    elps = Ellipse(1, 2, 3, 4);
    elps.print_data();
    elps.inside_status(-3, 2);

    cout<< "P = " << elps.calculate_perimeter() << "\n" <<
    "S = " << elps.calculate_square() <<endl;

    return 0;
}