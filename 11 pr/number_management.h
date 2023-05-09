#pragma once
#include <iostream>
class control {
private:
    int a, b, c, d;
public:
    control(int A, int B, int C, int D);
    void forward(int A);
    void back(int B);
    void left(int C);
    void right(int D);
    void map();
};