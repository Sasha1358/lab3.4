// Lab_03_4.cpp
// < Якубенко Олександра>
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 28 
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((-x <= y && y <= x && -R <= y && y <= R) ||
		(0 <= y && y <= R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}