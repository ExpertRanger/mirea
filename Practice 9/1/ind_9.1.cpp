#include "swap.h";
#include <iostream>
using namespace std;

template <class T> void Swap(T& x, T& y) {
    T z = x;
    x = y;
    y = z;
}
template <class T> void outxy(T& x, T& y) {
    cout << x << " " << y << "\n";
}

int main() {
    setlocale(LC_ALL, "rus");
    int x = 1;
    int y = 2;
    cout << "Перед обменом (целые)\n";
    outxy(x, y);
    Swap(x, y);
    cout << "После обмена\n";
    outxy(x, y);
    float x1 = 1.5;
    float y1 = 5.9;
    cout << "Перед обменом (float)\n";
    outxy(x1, y1);
    Swap(x1, y1);
    cout << "После обмена\n";
    outxy(x1, y1);
    Swapee t1(1, 1.5), t2(2, 9.9);
    cout << "Перед обменом (классы)\n";
    t1.out();
    t2.out();
    Swap(t1, t2);
    cout << "После обмена\n";
    t1.out();
    t2.out();
    return 0;
}