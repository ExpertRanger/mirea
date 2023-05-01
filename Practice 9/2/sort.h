#include <iostream>

using namespace std;

class Sort {
private:
	string n;
	int num;
public:
	Sort();
	Sort(string, int);
	bool operator>(Sort&);
	friend ostream& operator<<(ostream&, Sort);
	friend istream& operator>>(istream&, Sort&);
};
