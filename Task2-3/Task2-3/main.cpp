#include "Figure.h"
#include <iostream>
using namespace std;

int main() {
    Figure mas[8];

    float x1, x2, x3, x4;
    float y1, y2, y3, y4;

    for (int i = 0; i < 3; i++) {

        cout << "quadrilateral " << i + 1 << " x1,y1: " << endl;
        cin >> x1 >> y1;
        cout << "quadrilateral " << i + 1 << " x2,y2: " << endl;
        cin >> x2 >> y2;
        cout << "quadrilateral " << i + 1 << " x3,y3: " << endl;
        cin >> x3 >> y3;
        cout << "quadrilateral " << i + 1 << " x4,y4: " << endl;
        cin >> x4 >> y4;
        mas[i].figure(x1, x2, x3, x4, y1, y2, y3, y4);

    }

    for (int i = 0; i < 3; i++) {
        cout << "Parametr " << 1 << ": ";
        mas[i].show();

        cout << "rectangle? " << mas[i].is_prug() << endl;
        cout << "square? " << mas[i].is_square() << endl;
        cout << "rhomb? " << mas[i].is_romb() << endl;
        cout << "you can describe? " << mas[i].is_out_circle() << endl;
        cout << "you can enter? " << mas[i].is_in_circle() << endl;

    }

}