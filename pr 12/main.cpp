#include "hash_tab.h"
#include <iostream>
int main() {
	Table tab = Table(7);
	tab.insert(86);
	tab.insert(90);
	tab.insert(21);
	tab.insert(29);
	tab.insert(38);
	tab.insert(39);
	tab.insert(40);
	for (int i = 0; i < 7; i++) {
		std::cout << tab.find_num(i) << " ";
	}
	return 0;
}