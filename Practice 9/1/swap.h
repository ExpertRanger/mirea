#include <iostream>
using namespace std;


class Swapee {
    int a;
    float b;
public:
    Swapee(int a, float b);
    void out();
    Swapee operator = (Swapee& T);
};