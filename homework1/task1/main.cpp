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

    return 0;
}