#include <iostream>
#include <iomanip>
#include "polynomial.h"


using namespace std;

Polynomial sum(Polynomial &p1, Polynomial &p2) //TODO remake single equal for coef and arrays equal
{
    if ()
    {
        Polynomial p = p(1, p1.size);
        for (int i; i < p.size, i++)
        {
            p.set_coef = p1[i] + p2[i];
            p.set_expo
        }
    }
    else
    {
        cout << "Different size of objects" << endl;
    }
}

Polynomial dif(Polynomial &p1, Polynomial &p2)
{

}

Polynomial val(Polynomial &p)
{

}


Polynomial::Polynomial()
{
    this->size = 0;
    this->coef_vect = nullptr;
    this->expo_vect = nullptr;
    this->x = 0;

}

Polynomial::Polynomial(double new_x, int new_size)
{
    this->size = new_size;
    this->coef_vect = new double[new_size];
    this->expo_vect = new int[new_size];
    this->x = new_x;
}

Polynomial::Polynomial(const Polynomial &p)
{
    this->size = p.size;
    this->coef_vect = p.coef_vect;
    this->expo_vect = p.expo_vect;
    this->x = p.x;
}

Polynomial::~Polynomial(){}

void Polynomial::print()
{
    cout << "Polynomial:\n" << setw(10) << "coefficients: ";
    for (int i = 0; i < this->size; i++)
    {
        cout << this->coef_vect[i] << " ";
    }
    cout << endl;
    cout << setw(10) << "x: " << this->x << endl;
}

double *Polynomial::get_koef()
{
    return this->coef_vect;
}

int *Polynomial::get_expo()
{
    return this->expo_vect;
}

int Polynomial::get_size()
{
    return this->size;
}

double Polynomial::get_x()
{
    return this->x;
}

void Polynomial::set_coef(double *coef, int size_coef)
{
    if (this->size == size_coef)
    {
        for (int i = 0; i < size_coef; i++)
        {
            this->coef_vect[i] = coef[i];
        }
    }
    else
    {
        cout << "Sorry, coef_size not equal size of polynomial:<!" << endl;
    }
}

void Polynomial::set_size(int new_size) 
{
    if (new_size == this->size)
    {
        cout << "U don't change size!"<< endl;
    }
    else
    {
        double *a = new double[new_size];
        delete[] this->expo_vect;
        this->expo_vect = new int[new_size];
        if (new_size > this->size)
        {
            for (int i = 0; i < this->size; i++)
            {
                a[i] = this->coef_vect[i];
                this->expo_vect[i] = i;
            }
            delete[] this->coef_vect;
            this->coef_vect = a;

            cout << "Input new coefficients:" << endl;
            for (int i = this->size; i < new_size; i++)
            {
                printf("a%d = ", i);
                cin >> this->coef_vect[i];
                this->expo_vect[i] = i;
            }
        }
        else
        {
            for (int i = 0; i < new_size; i++)
            {
                a[i] = this->coef_vect[i];
                this->expo_vect[i] = i;
            }
            delete[] this->coef_vect;
            this->coef_vect = a;
        }
        this->size = new_size;
    }
}

void Polynomial::set_x(double new_x)
{
    this->x = new_x;
}

int Polynomial::get_pow()
{
    return this->expo_vect[this->set_size - 1];
}
