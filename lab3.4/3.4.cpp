// Lab_03_4.cpp
// < �������� ����������>
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 28 
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((-x <= y && y <= x && -R <= y && y <= R) ||
		(0 <= y && y <= R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}