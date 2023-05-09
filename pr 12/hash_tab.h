#pragma once
class Table {
private:
	int len = 7;
	int* mass;
public:
	Table(int Len);
	int hash_func(int num);
	int insert(int num);
	int find_index(int num);
	int find_num(int index);
};
