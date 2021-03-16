//
// Created by Andrey on 16.03.2021.
//
#include <iostream>
#include <cmath>
#include "dihot.h"

using namespace std;

double func(double x, int array, int maxDeg) {

    for (int i = 0; i <= maxDeg; ++i) {
        x += (array + i) * pow(x, (maxDeg - i));
    }

    return x;
}


double find(double x0, double x1, double eps, int array, int maxDeg) {
    double left = x0, right = x1, x, f;
    int iter = 0;
    cout << "x0= " << x0 << " x1= " << x1 << " ";
    do {
        x = (left + right) / 2;
        f = func(x, array, maxDeg);
        if (f > 0) right = x;
        else left = x;
        iter++;
    } while (fabs(f) > eps && iter < 20000);
    cout << iter << " iterations" << endl;
    return x;
}