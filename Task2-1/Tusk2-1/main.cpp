#include <iostream>
#include <cmath>
#include "Triangle.h"
using namespace std;


int main()
{
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "Triangle № " << i + 1 << "\na,b,c: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            cout << "NEXT.... " << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        setlocale(LC_ALL, "");
        cout << "P = " << mas[i].perimetr() << endl;
        cout << "S = " << mas[i].square() << endl;
    }
    return 0;
}