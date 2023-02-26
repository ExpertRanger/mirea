#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
	Circle mas[3];
	float radius;
	float x_center;
	float y_center;

	for (int i = 0; i < 3; i++) {
		cout << "Circle " << i + 1 << "\nr =  " << endl;
		cin >> radius;

		cout << "x " << i + 1 << " = " << endl;
		cin >> x_center;

		cout << "y " << i + 1 << " = " << endl;
		cin >> y_center;

		mas[i].set_circle(radius, x_center, y_center);
	}

	for (int i = 0; i < 3; i++) {
		cout << " " << i + 1 << ": " << mas[i].square() << endl;
		cout << "Circle ¹ " << i + 1 << " you can describe? " << mas[i].triangle_around(radius, x_center, y_center) << endl;
		cout << "Circle ¹ " << i + 1 << " you can enter? " << mas[i].triangle_in(radius, x_center, y_center) << endl;

	}
	float r2, x2, y2;
	cout << "r2,x2,y2: " << endl;
	cin >> r2 >> x2 >> y2;
	for (int i = 0; i < 3; i++) {
		cout << "Intersect? " << mas[i].check_circle(r2, x2, y2) << endl;
	}
}