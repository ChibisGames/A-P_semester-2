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
};