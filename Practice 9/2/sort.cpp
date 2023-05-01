#include "sort.h";
#include <iostream>
#include <string>

using namespace std;

Sort::Sort()
{
	n = "NONE";
	num = 0;
}

Sort::Sort(string name, int number)
{
	this->n = name;
	this->num = number;
}

bool Sort::operator>(Sort& obj)
{
	if (n > obj.n) return true;
	if (n == obj.n) {
		if (num > obj.num) {
			return true;
		}
		else return false;
	}
	else return false;
}

ostream& operator<<(ostream& stream, Sort obj)
{
	stream << obj.n << " ";
	stream << obj.num << " ";
	return stream;
}

istream& operator>>(istream& stream, Sort& obj)
{
	stream >> obj.n;
	stream >> obj.num;
	return stream;
}
