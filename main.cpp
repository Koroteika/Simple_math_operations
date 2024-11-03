#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;

	cout << "Целочисленное деление чисел = " << float(a) / b << endl;
	return 0;
}