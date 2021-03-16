#include <iostream>
#include "dihot.h"

using namespace std;

int main() {
    int maxDeg, coef, sequence;
    double a, b, eps;

    cout << "Enter maximum degree of polynom" << endl;
    cin >> maxDeg;
    int * array = new int[maxDeg];

    for (int i = 0; i <= maxDeg; ++i) {
        cout << "Enter the coefficient at x^" << (maxDeg - i) << endl;
        cin >> coef;
        array[i] = coef;
    }


    cout << "Enter left point" << endl;
    cin >> a;
    cout << "Enter right point" << endl;
    cin >> b;
    cout << "Enter epsilon" << endl;
    cin >> eps;


    cout << "Final result is" << endl;
    cout << find(a, b, eps, *array, maxDeg);
    return 0;
}