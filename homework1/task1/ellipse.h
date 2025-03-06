#pragma once

class Ellipse
{
    public:
        int h, k, a, b;

    public:
    Ellipse(int h = 0, int k = 0, int a = 0, int b = 0);
    Ellipse(const Ellipse &e);
    ~Ellipse();
    void normalize_axis(int &a, int &b);
    int count_hyperparametr();
    void set_all(int h_coord, int k_coord, int par_a, int par_b);
    void get_all(int &h_coord, int &k_coord, int &par_a, int &par_b);
    int* point_coordinates();
    int* focus_coordinates();
    double count_loc_hord();
    double count_excentritet();
    void print_data();
};