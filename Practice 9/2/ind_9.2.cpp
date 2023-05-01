#include "sort.h";
#include <iostream>
#include <string>

using namespace std;

template <class T> T* sort(T* list, int len)
{
	bool execution = true;
	for (int j = 0; j < len - 1; j++) {
		if (execution == true) {
			bool exchange = false;
			for (int i = 0; i < len - 1; i++) {
				if (list[i] > list[i + 1]) {
					swap(list[i], list[i + 1]);
					exchange = true;
				}
			}
			if (exchange == false) execution = false;
		}
	}
	return list;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int len = 4;

	int* list1 = new int[len];
	cout << "Введите 4 целых числа: \n";
	for (int i = 0; i < len; i++) {
		cin >> list1[i];
	}
	list1 = sort(list1, len);
	cout << "После сортировки: " << endl;
	for (int i = 0; i < len; i++) {
		cout << list1[i] << "\t";
	}
	cout << endl;

	cout << "Введите 4 вещественных числа: \n";
	float* list2 = new float[len];
	for (int i = 0; i < len; i++) {
		cin >> list2[i];
	}
	list2 = sort(list2, len);
	cout << "После сортировки: " << endl;
	for (int i = 0; i < len; i++) {
		cout << list2[i] << "\t";
	}
	cout << endl;

	cout << "Введите 4 слова (на англ.): \n";
	string* list3 = new string[len];
	for (int i = 0; i < len; i++) {
		cin >> list3[i];
	}
	list3 = sort(list3, len);
	cout << "После сортировки" << endl;
	for (int i = 0; i < len; i++) {
		cout << list3[i] << "\t";
	}
	cout << endl;

	return 0;
}