#include "heap.h"
Heap::Heap() {
	mas[100] = {0};
	n = 0;
	insert(0);
} 
Heap::Heap(int num, int* val) {
	mas[100] = {0};
	n = 0;
	for (int i = 0; i < num; i++) {
		insert(val[i]);
	}
}
void Heap::insert(int val) {
	mas[n] = val;
	n++;
	swap(n-1);
}
void Heap::swap(int i) {
	int a = (i - 1)/2;
	if (mas[a] > 0) {
		if (mas[i] < mas[a]) {
			int A = mas[i];
			mas[i] = mas[a];
			mas[a] = A;
			swap(a);
		}
	}
}
int Heap::count() {
	return n;
}
int Heap::min_val() {
	return mas[0];
}
int Heap::pop_min() {
	int min_val = mas[0];
	mas[0] = mas[n - 1];
	n--;
	bal(0);
	return min_val;
}
void Heap::bal(int a) {
	int fr_val = a;
	int left = 2 * a + 1;
	int right = 2 * a + 2;
	if (left < n && mas[left] < mas[fr_val])
		fr_val = left;
	if (right < n && mas[right] < mas[fr_val])
		fr_val = right;
	if (fr_val != a) {
		int swap_val = mas[a];
		mas[a] = mas[fr_val];
		mas[fr_val] = swap_val;
		bal(fr_val);
	}
}
std::ostream& operator<<(std::ostream& stream, Heap obj)
{
	for (int i = 0; i < obj.n; ++i) {
		stream << obj.mas[i] << " ";
	}
	return stream;
}