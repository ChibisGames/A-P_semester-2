#pragma once

class Ellipse
{
    public:
        double h, k, a, b;
        bool x_is_main;

    public:
    Ellipse(double h = 0, double k = 0, double a = 0, double b = 0, bool x_is_main = 1);
    Ellipse(const Ellipse &e);
    ~Ellipse();
    void normalize_axis(double &a, double &b);
    double count_hyperparametr();
    void set_all(double h_coord, double k_coord, double par_a, double par_b, bool x_is_main);
    void get_all(double &h_coord, double &k_coord, double &par_a, double &par_b, bool &x_is_main);
    void point_coordinates();
    void focus_coordinates();
    void count_loc_hord();
    void count_excentritet();
    void print_data();
    void inside_status(double x, double y);
    double calculate_perimeter();
    double calculate_square();
    double calculate_coord(double par, bool x_given_status);
};