#include "hash_tab.h"

Table::Table(int Len)
{
	
	mass = new int[Len]();
}

int Table::hash_func(int num)
{
	
	return num % len;
}

int Table::insert(int num)
{
	int hash = hash_func(num);
	mass[hash] = num;
	return 0;
}

int Table::find_index(int num)
{
	int ind = -1;
	for (int i = 0; i < len; i++) {
		if (num == mass[i]) {
			ind = i;
			break;
		}
	}
	return ind;
}

int Table::find_num(int index)
{
	return mass[index];
}
