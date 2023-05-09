#include "number_management.h"
control::control(int A, int B, int C, int D) {
    a = A;
    b = B;
    c = C;
    d = D;
}
void control::forward(int A) {
    a = a + A;
    if ((a - b < 2) || (a - b > 3)) {
        std::cout << "Туда нельзя" << std::endl;
        a = a - A;
    }
    if (a - b == 3 && c - d == 1) {
        std::cout << "Туда нельзя" << std::endl;
        a = a - A;
    }
}
void control::back(int B) {
    b = b + B;
    if ((a - b < 2) || (a - b > 3)) {
        std::cout << "Туда нельзя" << std::endl;
        b = b - B;
    }
    if (a - b == 3 && c - d == 1) {
        std::cout << "Туда нельзя" << std::endl;
        b = b - B;
    }
}
void control::left(int C) {
    c = c + C;
    if ((c - d < 2) || (c - d > 3)) {
        std::cout << "Туда нельзя" << std::endl;
        c = c - C;
    }
    if (a - b == 3 && c - d == 1) {
        std::cout << "Туда нельзя" << std::endl;
        c = c - C;
    }
};
void control::right(int D) {
    d = d + D;
    if ((c - d < 2) || (c - d > 3)) {
        std::cout << "Туда нельзя" << std::endl;
        d = d - D;
    }
    if (a - b == 3 && c - d == 1) {
        std::cout << "Туда нельзя" << std::endl;
        d = d - D;
    }
};
void control::map() {
    std::cout << "------" << std::endl;
    if (a - b == 2 && c - d == 1)
        std::cout << 0 << " ";
    else
        std::cout << "  ";
    if (a - b == 2 && c - d == 2)
        std::cout << 0 << " ";
    else
        std::cout << "  ";
    std::cout << " |" << std::endl;
    std::cout << "| ";
    if (a - b == 3 && c - d == 2)
        std::cout << 0 << " ";
    else
        std::cout << "  ";
    std::cout << " |" << std::endl;
};