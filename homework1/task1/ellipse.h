#pragma once

class Ellipse
{
    public:
        double h, k, a, b;

    public:
    Ellipse(double h = 0, double k = 0, double a = 0, double b = 0);
    Ellipse(const Ellipse &e);
    ~Ellipse();
    void normalize_axis(double &a, double &b);
    double count_hyperparametr();
    void set_all(double h_coord, double k_coord, double par_a, double par_b);
    void get_all(double &h_coord, double &k_coord, double &par_a, double &par_b);
    double* point_coordinates();
    double* focus_coordinates();
    double count_loc_hord();
    double count_excentritet();
    void print_data();
};