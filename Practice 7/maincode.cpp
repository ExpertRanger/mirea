#include <iostream>
#include <ctime>
#include "momeDatchik.h"
#include "object.h"
#include "windows.h"

using namespace std;

int main()
{
	srand(time(NULL));

	int size = 16;
	object* objects = new object[size];

	for (int i = 0; i < size; i++)
	{
		objects[i].set(rand() % 101, rand() % 101, (rand() % 101 - 50) / 10.0, (rand() % 101 - 50) / 10.0, 0, 100, 100, 0);
	}

	momeDatchik datchik1(20, 20, 20);
	momeDatchik datchik2(20, 20, 10);
	momeDatchik datchik3(50, 50, 25);
	momeDatchik datchik4(35, 20, 20);

	while (true)
	{
		for (int i = 0; i < size; i++) objects[i].update();

		Sleep(1000);

		if (datchik1.cheak(objects, size)) cout << "Dat 1 reg " << datchik1.count(objects, size) << " object\n";
		else cout << "Dat 1 not reg\n";
		if (datchik2.cheak(objects, size)) cout << "Dat 2 reg " << datchik2.count(objects, size) << " object\n";
		else cout << "Dat 2 not reg\n";
		if (datchik3.cheak(objects, size)) cout << "Dat 3 reg " << datchik3.count(objects, size) << " object\n";
		else cout << "Dat 3 not reg\n";
		if (datchik4.cheak(objects, size)) cout << "Dat 4 reg " << datchik4.count(objects, size) << " object\n";
		else cout << "Dat 4 not reg\n";
		cout << "\n";
	}

	return 0;
}