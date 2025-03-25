#include <iostream>
#include "product.h"
#include "warehouse.h"
#include "product.cpp"
#include "warehouse.cpp"
#include <cstring>

using namespace std;

int main()
{
    p = Product();
    p.set("123", "321", 15, 34, 45, 50);
    p.print();

    w = Warehouse();
    return 0;
}