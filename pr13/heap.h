#pragma once
#include <iostream>
class Heap {
protected:
	int mas[100];
	int n;
public:
	Heap();
	Heap(int num, int* val);
	void insert(int val);
	void swap(int i);
	int count();
	int min_val();
	int pop_min();
	void bal(int a);
	friend std::ostream& operator<<(std::ostream& stream, Heap obj);
};