#include "swap.h";
#include <iostream>
using namespace std;

Swapee::Swapee(int a, float b) {
    this->a = a;
    this->b = b;
}
void Swapee::out() {
    cout << a << " " << b << "\n";
}
Swapee Swapee::operator=(Swapee& T) {
    a = T.a;
    b = T.b;
    return *this;
} 